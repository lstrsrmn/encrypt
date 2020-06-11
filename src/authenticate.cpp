#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
//
// Created by matthew on 26/05/2020.
//

#include "../include/authenticate.h"

MicrosoftAccountAuthState authenticateMicrosoftAccount(std::string idToken, const std::string &clientID, unsigned expectedNumUsedOnce,
                                  const std::string &expectedEmail) {
    nlohmann::json keys = httpGetJson(MICROSOFT_AUTH_KEY_URL);

    if (idToken.substr(0, sizeof("error") - 1) == "error") {
        return RECEIVED_ERRONEOUS_TOKEN;
    }

    nlohmann::json header, body;
    std::string headerRaw, bodyRaw, signature;

    idToken.erase(0, sizeof("id_token=") - 1);

    size_t dividerPoint = idToken.find('.');

    headerRaw = idToken.substr(0, dividerPoint);
    try {
        header = nlohmann::json::parse(decodeBase64String(headerRaw));
    } catch (nlohmann::json::parse_error &) {
        return RECEIVED_ERRONEOUS_TOKEN;
    }

    idToken.erase(0, dividerPoint + 1);

    dividerPoint = idToken.find('.');

    bodyRaw = idToken.substr(0, dividerPoint);

    try {
        body = nlohmann::json::parse(decodeBase64String(bodyRaw));
    } catch (nlohmann::json::parse_error &) {
        return RECEIVED_ERRONEOUS_TOKEN;
    }

    idToken.erase(0, dividerPoint + 1);

    signature = decodeBase64String(idToken);

    std::string n, e;
    bool foundMatchingKey = false;

    for (nlohmann::json::iterator key = keys["keys"].begin(); key != keys["keys"].end(); key++) {
        if (key.value()["kid"] == header["kid"]) {
            n = decodeBase64String(key.value()["n"]);
            e = decodeBase64String(key.value()["e"]);
            foundMatchingKey = true;
            break;
        }
    }

    if (!foundMatchingKey) {
        return NO_MATCHING_KEY;
    }

    if (body["aud"] != clientID) {
        return INVALID_TOKEN;
    }

    if (body["email"] != expectedEmail) {
        return INVALID_TOKEN;
    }

    if (body["nonce"] != std::to_string(expectedNumUsedOnce)) {
        return INVALID_TOKEN;
    }

    PublicKey key;
    uint2048 sig;

    std::reverse(n.begin(), n.end());
    std::reverse(e.begin(), e.end());
    std::reverse(signature.begin(), signature.end());

    memcpy(&key.n, n.c_str(), 256);
    memcpy(&sig, signature.c_str(), signature.size());

    memcpy(&key.e, e.c_str(), 4);

    std::stringstream hashMessage;
    hashMessage << headerRaw << "." << bodyRaw;

    uint2048 decryptedSignature = sig.exp(key.e, key.n);

    uint2048 emsaEncodedHash = EMSA_PKCS1_v1_5_SHA(hashMessage.str());

    if (decryptedSignature != emsaEncodedHash) {
        return INVALID_SIGNATURE;
    }

    return AUTHENTICATED;
}

QueryURL getMicrosoftAccountIDQueryURL(const std::string &clientID, const std::string &redirectURL) {
    unsigned nonce;
    CryptoSafeRandom::random(&nonce, sizeof(unsigned));

    std::stringstream url;
    url << "https://login.microsoftonline.com/common/oauth2/v2.0/authorize?";
    url << "client_id=" << clientID << "&";
    url << "response_type=id_token&";
    url << "redirect_uri=" << redirectURL << "&";
    url << "response_mode=form_post&";
    url << "scope=openid+profile&";
    url << "nonce=" << nonce;

    return { url.str(), nonce };
}

std::string openOneShotHTTPAuthenticationServer(const std::string &serverAddress, unsigned short port,
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

nlohmann::json httpGetJson(const std::string &url) {
    CURL *curl;
    std::string readBuffer;

    curl = curl_easy_init();

    if (!curl) {
        std::cerr << "Failed to initialise cURL." << std::endl;
        return {};
    }

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_perform(curl);
    curl_easy_cleanup(curl);

    return nlohmann::json::parse(readBuffer);
}

static size_t writeCallback(void *contents, size_t size, size_t nMem, void *userP) {
    ((std::string *) userP)->append((char *) contents, size * nMem);
    return size * nMem;
}

static unsigned char charPos(const unsigned char c) {
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
    size_t stringLength = base64.length();

    if (!stringLength) {
        return "";
    }

    while (base64.length() % 4 != 0) {
        base64.push_back('=');
    }

    size_t pos = 0;

    std::string decoded;
    decoded.reserve(stringLength / 4 * 3);

    while (pos < stringLength) {
        unsigned posChar1 = charPos(base64[pos + 1]);
        decoded.push_back((char) ((charPos(base64[pos]) << 2u) + ((posChar1 & 0x30u) >> 4u)));

        if (base64[pos + 2] != '=' && base64[pos + 2] != '.') {
            unsigned posChar2 = charPos(base64[pos + 2]);
            decoded.push_back((char) (((posChar1 & 0x0Fu) << 4u) + ((posChar2 & 0x3Cu) >> 2u)));

            if (base64[pos + 3] != '=' && base64[pos + 3] != '.') {
                decoded.push_back((char) (((posChar2 & 0x03u) << 6u) + charPos(base64[pos + 3])));
            }
        }

        pos += 4;
    }

    return decoded;
}

uint2048 EMSA_PKCS1_v1_5_SHA(const std::string &message) {
    uint256 hash = sha256(message.c_str(), message.size());

    int index = 0;

    uint8 encodedRaw[sizeof(uint2048)];

    memcpy(encodedRaw, &hash, sizeof(uint256));
    index += sizeof(uint256);

    uint8 shaCode[] = {
            0x20u, 0x04u, 0x00u, 0x05u, 0x01u, 0x02u, 0x04u, 0x03u, 0x65u, 0x01u,
            0x48u, 0x86u, 0x60u, 0x09u, 0x06u, 0x0Du, 0x30u, 0x31u, 0x30u
    };

    for (uint8 *c = shaCode; c != shaCode + sizeof(shaCode); c++) {
        encodedRaw[index++] = *c;
    }

    encodedRaw[index++] = 0x00u;

    while (index < 254) {
        encodedRaw[index++] = 0xFFu;
    }

    encodedRaw[index++] = 0x01u;
    encodedRaw[index++] = 0x00u;

    uint2048 encoded;
    memcpy(&encoded, encodedRaw, sizeof(uint2048));

    return encoded;
}

#pragma clang diagnostic pop