//
// Created by matthew on 26/05/2020.
//

#ifndef ENCRYPT_AUTHENTICATE_H
#define ENCRYPT_AUTHENTICATE_H

#include <iostream>
#include <sstream>
#include <curl/curl.h>
#ifdef _WIN32
//#include <winsock2.h>

#include <Windows.h>
#include <ws2tcpip.h>

// #pragma comment(lib, "Ws2_32.lib")
#else
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#endif
#include <nlohmann/json.hpp>
#include <utility>

#include "safeRandom.h"
#include "sha.h"
#include "key.h"

// The URL location of the current active keys. A cURL request here will return JSON content holding a set
// of possible validation keys for an id token.
const std::string MICROSOFT_AUTH_KEY_URL = "https://login.microsoftonline.com/common/discovery/v2.0/keys";

// Simple struct to hold a query alongside a number used once (for verification)
struct QueryURL {
    std::string url = "";
    unsigned numberUsedOnce = 0;

    QueryURL() = default;

    QueryURL(std::string url, unsigned numberUsedOnce)
            : url(std::move(url)), numberUsedOnce(numberUsedOnce) {}
};

// Status messages for authenticating a microsoft account
enum MicrosoftAccountAuthState {
    AUTHENTICATED,
    RECEIVED_ERRONEOUS_TOKEN,
    NO_MATCHING_KEY,
    INVALID_TOKEN,
    INVALID_SIGNATURE
};

// Authenticate a Microsoft Account to check a user is who they say they are
MicrosoftAccountAuthState authenticateMicrosoftAccount(std::string idToken, const std::string &clientID, unsigned expectedNumUsedOnce,
                                  const std::string &expectedEmail, nlohmann::json &claims);

// Returns a URL that the user must open in their web browser to authenticate themselves through a Microsoft
// account
QueryURL getMicrosoftAccountIDQueryURL(const std::string &clientID, const std::string &redirectURL, unsigned numberUsedOnce = 0);

// Open a simple HTTP listen server that will listen for a response from a certain address. It will return a success
// or error message to the user, and will return the HTTP request it received. After receiving a single request,
// the server will shut itself down and return.
std::string openOneShotHTTPAuthenticationServer(const std::string &serverAddress, unsigned short port,
                                                const std::string &responseHTML = "<html><body><h1>Success</h1></body></html>");

std::string __openOneShotHTTPAuthServerImpl(const std::string &serverAddress, unsigned short port,
    const std::string &responseHTML);

// Get a JSON object of the response from a URL
nlohmann::json httpGetJson(const std::string &url);

// Decode a base64 string
std::string decodeBase64String(std::string base64);

// Hash the message with SHA256 and pad appropriately as given in the standard
uint2048 EMSA_PKCS1_v1_5_SHA(const std::string &message);

size_t writeCallback(void *contents, size_t size, size_t nMem, void *userP);

#endif //ENCRYPT_AUTHENTICATE_H
