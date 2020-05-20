//
// Created by matthew on 19/05/2020.
//

#include <iostream>

#include "../include/keyGenerator.h"
#include <chrono>

int main() {
    std::chrono::system_clock::time_point start, end;

    start = std::chrono::system_clock::now();

    KeyPair kp = generateKeyPair();
    char messageText[] = "Hello, World!";

    uint2048 message = 53;
//    memcpy(&message, messageText, sizeof(messageText));

    uint2048 cipher = kp.publicKey.encrypt(message);

//    char buff[257];
//    memcpy(buff, &cipher, 256);
//    buff[256] = 0;

    std::cout << cipher.value[0] << std::endl;

    uint2048 decrypted = kp.privateKey.decrypt(cipher);

//    char buff2[257];
//    memcpy(buff2, &decrypted, 256);
//    buff2[256] = 0;

    std::cout << decrypted.value[0] << std::endl;

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Time: " << elapsed.count() << std::endl;

    return 0;
}