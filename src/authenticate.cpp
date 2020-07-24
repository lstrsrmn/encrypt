#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
//
// Created by matthew on 26/05/2020.
//

#include "../include/authenticate.h"

MicrosoftAccountAuthState authenticateMicrosoftAccount(std::string idToken, const std::string &clientID, unsigned expectedNumUsedOnce,
                                  const std::string &expectedEmail, nlohmann::json &claims) {
    // Get the set of signing keys from this microsoft URL
    nlohmann::json keys = httpGetJson(MICROSOFT_AUTH_KEY_URL);

    // If the token doesn't start with the following string, then it is an invalid token, probably an "error" token
    if (idToken.substr(0, sizeof("id_token=") - 1) != "id_token=") {
        return RECEIVED_ERRONEOUS_TOKEN;
    }

    // JSON Web Tokens (JWTs) are split into three components - a header section, a payload section and a signature
    // section which signs the hash of the first two sections with a private key (assuming that this token is using
    // RS256).

    // Declare JSON objects for the header and body of the token, and strings for the raw base64 strings
    nlohmann::json header, body;
    std::string headerRaw, bodyRaw, signature;

    // Delete the first part of the token; it serves no purpose other than identifying that we have in fact received
    // a JWT token from the microsoft server
    idToken.erase(0, sizeof("id_token=") - 1);

    // Find the first usage of the '.' character. JWTs are split as: header.payload.signature
    size_t dividerPoint = idToken.find('.');

    // Take the substring up to this divider point into the raw string
    headerRaw = idToken.substr(0, dividerPoint);

    // Try to parse the header into a JSON object. If this fails, the token provided was erroneous.
    try {
        header = nlohmann::json::parse(decodeBase64String(headerRaw));
    } catch (nlohmann::json::parse_error &) {
        return RECEIVED_ERRONEOUS_TOKEN;
    }

    // Delete the header from the token string (we are essentially splitting this string)
    idToken.erase(0, dividerPoint + 1);

    // Find the second '.' which divides the payload (body) from the signature
    dividerPoint = idToken.find('.');

    // Take the substring up to this second divider
    bodyRaw = idToken.substr(0, dividerPoint);

    // Try to parse the payload (body) into a JSON object. If this fails, the token was erroneous
    try {
        body = nlohmann::json::parse(decodeBase64String(bodyRaw));
        claims = body;
    } catch (nlohmann::json::parse_error &) {
        return RECEIVED_ERRONEOUS_TOKEN;
    }

    // Delete the payload section from the token string
    idToken.erase(0, dividerPoint + 1);

    // Finally, decode the signature, which represents a 2048 bit integer (encoded in base 64, so we must decode it)
    // which we are expecting to have been signed by the microsoft authentication servers.
    signature = decodeBase64String(idToken);

    // Declare an object for the signing key, which must exist in the JSON object received from the Microsoft server
    // for this to be valid.
    RSAKeyPair::Public signingKey;
    bool foundMatchingKey = false;

    // Loop through each possible key
    for (nlohmann::json::iterator key = keys["keys"].begin(); key != keys["keys"].end(); key++) {
        // If we have a matching key
        if (key.value()["kid"] == header["kid"]) {
            // Get n and e components from this public key and decode them
            std::string n = decodeBase64String(key.value()["n"]);
            std::string e = decodeBase64String(key.value()["e"]);
            // Reverse each decoding (as they are big endian, and we want them little endian)
            std::reverse(n.begin(), n.end());
            std::reverse(e.begin(), e.end());

            // Copy the memory from the strings into the key - note that whilst these numbers are stored in strings,
            // they have been decoded so each byte of the string actually represents a number, not a character.
            memcpy(&signingKey.n, n.c_str(), 256);
            memcpy(&signingKey.e, e.c_str(), 4);

            // Set that we have found a key and break from the loop
            foundMatchingKey = true;
            break;
        }
    }

    // If we didn't find a matching key, then the token is invalid, so return.
    if (!foundMatchingKey) {
        return NO_MATCHING_KEY;
    }

    // Next we check the claims made in the token itself.

   // First, we check the "audience" claim. This claim must be equal to the correct client app ID - otherwise
   // the token could be a valid token for a different app, which would make the system very easy to fool!
    if (body["aud"] != clientID) {
        return INVALID_TOKEN;
    }

    // Next, we check the "email" claim. This should match the provided email. This is where we actually authenticate
    // a specific user. Note, however, that if no expected email is provided, we skip this check. This makes the
    // assumption that the application will then check the user elsewhere, and it may do so by different means
    // (e.g. by their name rather than email)
    if (body["email"] != expectedEmail && !expectedEmail.empty()) {
        return INVALID_TOKEN;
    }

    // Finally, we check the number used once. When we made the request to the Microsoft authentication servers we
    // provided a number which it echoed back in the JWT, and as such used it as part of the hash. Therefore, if the token
    // does not contain the correct number, either the signature will be invalid, or the number won't match. This
    // stops the possibility of being able to reuse a token.
    if (body["nonce"] != std::to_string(expectedNumUsedOnce)) {
        return INVALID_TOKEN;
    }

    // The signature is computed by first taking the hash of the header and payload sections (before base64 decoding)
    // and separated by a single '.' character. The hashing algorithm used is SHA256. This hash is then padded using
    // the EMSA PKCS1 v1.5 algorithm (implemented below) which contains a specific code for SHA256, along with
    // some other padding. This padded hash is finally signed by the sender's private key. Therefore, to verify
    // that this signature is actually valid, we first decrypt it using the sender's public key, which we have
    // gathered above. So, to verify, we compute the same padded hash value using the EMSA PKCS1 algorithm, and then
    // check that the result is identical to the decrypted signature. This guarantees that the JWT came from a valid
    // location, as only the signer would know the private key required to sign the message.

    // First, we need to convert the signature into the number it actually represents. We have already decoded it,
    // so again we simply must reverse the data to flip endianness and copy into a signature uint2048.
    uint2048 sig;
    std::reverse(signature.begin(), signature.end());
    memcpy(&sig, signature.c_str(), signature.size());

    // Next, we create a string for what we want to encode - namely the base64 header and payload split by a '.'
    std::stringstream hashMessage;
    hashMessage << headerRaw << "." << bodyRaw;

    // Next, we decrypt the signature value using standard RSA digital signature decryption
    uint2048 decryptedSignature = sig.exp(signingKey.e, signingKey.n);

    // Then we encode the hash message using SHA256 and EMSA PKCS1
    uint2048 emsaEncodedHash = EMSA_PKCS1_v1_5_SHA(hashMessage.str());

    // If the decrypted signature and EMSA encoded hash do not match, the signature was invalid.
    if (decryptedSignature != emsaEncodedHash) {
        return INVALID_SIGNATURE;
    }

    // Finally, if, and only if, all the previous tests have passed (i.e. we haven't returned by this point)
    // then we return that authentication was successful.
    return AUTHENTICATED;
}

QueryURL getMicrosoftAccountIDQueryURL(const std::string &clientID, const std::string &redirectURL, unsigned numberUsedOnce) {
    // Generate a random number used once
    if (numberUsedOnce == 0) {
        CryptoSafeRandom::random(&numberUsedOnce, sizeof(unsigned));
    }

    // Construct a string containing all the relevant information to send to the Microsoft authentication
    // servers
    std::stringstream url;
    url << "https://login.microsoftonline.com/organizations/oauth2/v2.0/authorize?";
    url << "client_id=" << clientID << "&";
    url << "response_type=id_token&";
    url << "redirect_uri=" << redirectURL << "&";
    url << "response_mode=form_post&";
    url << "scope=openid+profile&";
    url << "nonce=" << numberUsedOnce;

    // Return both the url string and the number we generated (for checking against later)
    return { url.str(), numberUsedOnce };
}

std::string openOneShotHTTPAuthenticationServer(const std::string &serverAddress, unsigned short port,
                                                const std::string &responseHTML) {
    return __openOneShotHTTPAuthServerImpl(serverAddress, port, responseHTML);
}

#ifdef _WIN32

std::string __openOneShotHTTPAuthServerImpl(const std::string &serverAddress, unsigned short port,
    const std::string &responseHTML) {

    int infoResult;
    // WSADATA wsaData;

    SOCKET serverSocket = INVALID_SOCKET;

    /*if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Failed to initialise WSA." << std::endl;
        return std::string();
    }*/

    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        std::cerr << "Failed to create TCP socket: " << WSAGetLastError() << std::endl;
        // WSACleanup();
        return std::string();
    }

    // Setup the socket options to make it reuse ports and addresses
    BOOL reuseAddr = TRUE, reusePort = TRUE;

    if ((setsockopt(serverSocket, SOL_SOCKET, SO_REUSEADDR, (char *) &reuseAddr, sizeof(BOOL))) != 0) {
        std::cerr << "Failed to set TCP socket to reuse address." << std::endl;
        closesocket(serverSocket);
        // WSACleanup();
        return std::string();
    }

    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr(serverAddress.c_str());
    address.sin_port = htons(port);

    if (bind(serverSocket, (SOCKADDR *) &address, sizeof(address)) == SOCKET_ERROR) {
        std::cerr << "Failed to bind server to address: " << WSAGetLastError() << std::endl;
        closesocket(serverSocket);
        WSACleanup();
        return std::string();
    }

    if (listen(serverSocket, 4) == SOCKET_ERROR) {
        std::cerr << "Failed to initialise listening: " << WSAGetLastError() << std::endl;
        closesocket(serverSocket);
        // WSACleanup();
        return std::string();
    }

    SOCKET connectorSocket = INVALID_SOCKET;

    if ((connectorSocket = accept(serverSocket, NULL, NULL)) == INVALID_SOCKET) {
        std::cerr << "Failed to accept client: " << WSAGetLastError() << std::endl;
        closesocket(serverSocket);
        // WSACleanup();
        return std::string();
    }

    // Create a HTTP response to send back
    std::stringstream response;

    response << "HTTP/1.1 200 OK" << std::endl;
    response << "Content-Type: text/html;charset=UTF-8" << std::endl;
    response << "Content-Length: " << responseHTML.size() << std::endl;
    response << std::endl;
    response << responseHTML << std::endl;

    // Send the HTTP response to the client
    send(connectorSocket, response.str().c_str(), response.str().size(), 0);

    // Create a string stream for the received data
    std::stringstream data;

    // Allocate a read buffer
    char buffer[1024];

    int inSize, outSize;

    // Initialise a cURL object to decode the received messages
    CURL *curl = curl_easy_init();

    // For as long as the sender is sending data
    while (true) {
        // Clear the buffer
        memset(buffer, 0, sizeof(buffer));
        // Receive the message
        inSize = recv(connectorSocket, buffer, sizeof(buffer), 0);
        // If the message was empty, we have finished reading so break.
        if (inSize <= 0) {
            break;
        }
        // Decode the last read message and write it to the data stream
        data << curl_easy_unescape(curl, buffer, inSize, &outSize);
    }

    // Delete the cURl object
    curl_easy_cleanup(curl);

    // Shut the server down
    /*if (shutdown(serverSocket, SD_BOTH) == SOCKET_ERROR) {
        std::cerr << "Failed to shut down server socket: " << WSAGetLastError() << std::endl;
        closesocket(connectorSocket);
        WSACleanup();
        return std::string();
    }*/

    // Close the sockets
    closesocket(serverSocket);
    closesocket(connectorSocket);

    // Process the sent data - the caller most likely doesn't want the HTTP POST header. They want the data
    // The header ends with "\r\n\r\n" so we return the substring starting where we find this code.
    const char headerEndCode[] = "\r\n\r\n";
    const std::string dataString = data.str();

    size_t start = dataString.find(headerEndCode) + sizeof(headerEndCode) - 1, end = dataString.find('&');

    std::string receivedData = dataString.substr(start, end - start);

    // Return the data
    return receivedData;
}

#else

std::string __openOneShotHTTPAuthServerImpl(const std::string &serverAddress, unsigned short port,
    const std::string &responseHTML) {
    // File descriptor for this temporary server
    int serverFD;

    // Create the socket
    if ((serverFD = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        std::cerr << "Failed to create TCP socket." << std::endl;
        return "";
    }

    // Setup the socket options to make it reuse ports and addresses
    int tcpOptions;

    if ((setsockopt(serverFD, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &tcpOptions, sizeof(tcpOptions))) < 0) {
        std::cerr << "Failed to set TCP socket to reuse address and port." << std::endl;
        return "";
    }

    // Struct to hold the address of the server
    sockaddr_in address{};
    socklen_t addressLength = sizeof(address);

    // Populate this structure by converting the given IP to an actually unsigned address
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    if (inet_pton(AF_INET, serverAddress.c_str(), &address.sin_addr) < 0) {
        std::cerr << "Failed to convert IP string to address." << std::endl;
        close(serverFD);
        return "";
    }

    // Bind the socket to the address
    if (bind(serverFD, (struct sockaddr *) &address, sizeof(address)) < 0) {
        std::cerr << "Failed to bind server to address." << std::endl;
        close(serverFD);
        return "";
    }

    // Listen for incoming connections
    if (listen(serverFD, 4) < 0) {
        std::cerr << "Failed to initialise listening." << std::endl;
        close(serverFD);
        return "";
    }

    // Accept a client TODO: This will always accept the first client, which may be unsafe.
    int connectorFD;
    if ((connectorFD = accept(serverFD, (struct sockaddr *) &address, &addressLength)) < 0) {
        std::cerr << "Failed to accept client." << std::endl;
        close(serverFD);
        return "";
    }

    // Create a HTTP response to send back
    std::stringstream response;

    response << "HTTP/1.1 200 OK" << std::endl;
    response << "Content-Type: text/html;charset=UTF-8" << std::endl;
    response << "Content-Length: " << responseHTML.size() << std::endl;
    response << std::endl;
    response << responseHTML << std::endl;

    // Send the HTTP response to the client
    send(connectorFD, response.str().c_str(), response.str().size(), 0);

    // Create a string stream for the received data
    std::stringstream data;

    // Allocate a read buffer
    char buffer[1024];

    int inSize, outSize;

    // Initialise a cURL object to decode the received messages
    CURL *curl = curl_easy_init();

    // For as long as the sender is sending data
    while (true) {
        // Clear the buffer
        memset(buffer, 0, sizeof(buffer));
        // Receive the message
        inSize = recv(connectorFD, buffer, sizeof(buffer), 0);
        // If the message was empty, we have finished reading so break.
        if (inSize <= 0) {
            break;
        }
        // Decode the last read message and write it to the data stream
        data << curl_easy_unescape(curl, buffer, inSize, &outSize);
    }

    // Delete the cURl object
    curl_easy_cleanup(curl);

    // Close the sockets
    close(serverFD);
    close(connectorFD);

    // Shut the server down
    shutdown(serverFD, SHUT_RDWR);

    // Process the sent data - the caller most likely doesn't want the HTTP POST header. They want the data
    // The header ends with "\r\n\r\n" so we return the substring starting where we find this code.
    const char headerEndCode[] = "\r\n\r\n";
    std::string receivedData = data.str().substr(data.str().find(headerEndCode) + sizeof(headerEndCode) - 1);

    // Return the data
    return receivedData;
}
#endif

nlohmann::json httpGetJson(const std::string &url) {
    // Construct a cURL object and declare a read buffer for the response
    CURL *curl = curl_easy_init();

    if (!curl) {
        std::cerr << "Failed to create cURL context." << std::endl;
        return "";
    }

    std::string readBuffer;

    CURLcode c;

    // Set the URL, read buffer and write callback for the cURL object
    c = curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    if (c != CURLE_OK) {
        std::cerr << "Failed to set cURL URL option: " << curl_easy_strerror(c) << std::endl;
        return "";
    }
    c = curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    if (c != CURLE_OK) {
        std::cerr << "Failed to set cURL write buffer: " << curl_easy_strerror(c) << std::endl;
        return "";
    }
    c = curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
    if (c != CURLE_OK) {
        std::cerr << "Failed to set cURL write callback: " << curl_easy_strerror(c) << std::endl;
        return "";
    }

    // Perform the transaction - the response is now in the read buffer
    c = curl_easy_perform(curl);
    if (c != CURLE_OK) {
        std::cerr << "Failed to perform cURL operation: " << curl_easy_strerror(c) << std::endl;
        return "";
    }

    // Destroy the cURL object
    curl_easy_cleanup(curl);

    nlohmann::json j;

    try {
        j = nlohmann::json::parse(readBuffer);
        return j;
    } catch (nlohmann::json::parse_error &) {
        std::cerr << "Invalid JSON string response." << std::endl;
        return {};
    }
}

static unsigned char charPos(const unsigned char c) {
    // Convert a base64 encoded character to its correct numerical value (between 0 and 63)
    if (c >= 'A' && c <= 'Z') {
        return c - 'A';
    }
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + ('Z' - 'A') + 1;
    }
    if (c >= '0' && c <= '9') {
        return c - '0' + ('Z' - 'A') + ('z' - 'a') + 2;
    }
    if (c == '+' || c == '-') {
        return 62;
    }
    if (c == '/' || c == '_') {
        return 63;
    }

    std::cerr << "Invalid Base64 string detected." << std::endl;
    return -1;
}

std::string decodeBase64String(std::string base64) {
    // Get the total length of the encoding string
    size_t stringLength = base64.length();

    // If empty, we don't have to do anything
    if (!stringLength) {
        return "";
    }

    // Keep adding '=' (which act like null characters for base64 strings) until the length is a multiple of 4
    while (base64.length() % 4 != 0) {
        base64.push_back('=');
    }

    size_t pos = 0;

    // Reserve enough space for the decoded string
    std::string decoded;
    decoded.reserve(stringLength / 4 * 3);

    // Loop through until the position we are looking at is out of range
    while (pos < stringLength) {
        // base64 decoding algorithm
        unsigned posChar1 = charPos(base64[pos + 1]);
        decoded.push_back((char) ((charPos(base64[pos]) << 2u) + ((posChar1 & 0x30u) >> 4u)));

        if (base64[pos + 2] != '=' && base64[pos + 2] != '.') {
            unsigned posChar2 = charPos(base64[pos + 2]);
            decoded.push_back((char) (((posChar1 & 0x0Fu) << 4u) + ((posChar2 & 0x3Cu) >> 2u)));

            if (base64[pos + 3] != '=' && base64[pos + 3] != '.') {
                decoded.push_back((char) (((posChar2 & 0x03u) << 6u) + charPos(base64[pos + 3])));
            }
        }

        // Increment the position
        pos += 4;
    }

    // Return the resultant string
    return decoded;
}

uint2048 EMSA_PKCS1_v1_5_SHA(const std::string &message) {
    // First, hash the message using the correct hashing algorithm. As we only need to use SHA256, we use SHA256 here
    // automatically
    uint256 hash = sha256(message.c_str(), message.size());

    // Retain an index for where in the buffer we are currently writing
    int index = 0;

    // Declare a buffer for the encoded result
    uint8 encodedRaw[sizeof(uint2048)];

    // First, copy the hash into the low bytes of the encoded message
    memcpy(encodedRaw, &hash, sizeof(uint256));
    index += sizeof(uint256);

    // This is the SHA256 algorithm DER encoding sequence
    const uint8 shaCode[] = {
            0x20u, 0x04u, 0x00u, 0x05u, 0x01u, 0x02u, 0x04u, 0x03u, 0x65u, 0x01u,
            0x48u, 0x86u, 0x60u, 0x09u, 0x06u, 0x0Du, 0x30u, 0x31u, 0x30u
    };

    // Copy this sequence of values into the encoded message
    for (const uint8 *c = shaCode; c != shaCode + sizeof(shaCode); c++) {
        encodedRaw[index++] = *c;
    }

    // Set the next byte to 0
    encodedRaw[index++] = 0x00u;

    // Set each byte up to the last 2 bytes to 0xFF
    while (index < 254) {
        encodedRaw[index++] = 0xFFu;
    }

    // Set the penultimate byte to 1 and the final to 0
    encodedRaw[index++] = 0x01u;
    encodedRaw[index] = 0x00u;

    // Create a uint2048 object and then copy in the raw data
    uint2048 encoded;
    memcpy(&encoded, encodedRaw, sizeof(uint2048));

    // Return the encoded number
    return encoded;
}

size_t writeCallback(void *contents, size_t size, size_t nMem, void *userP) {
    // Standard write callback for cURL
    ((std::string *) userP)->append((char *) contents, size * nMem);
    return size * nMem;
}

#pragma clang diagnostic pop