#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
//
// Created by matthew on 19/05/2020.
//

#include <iostream>

#include "../include/encrypt.h"
#include <chrono>
#include <unistd.h>

int main() {
//    std::chrono::system_clock::time_point start, end;
//
//    start = std::chrono::system_clock::now();
//
//    RSAKeyPair kp = generateRSAKeyPair();
//
//    end = std::chrono::system_clock::now();
//
//    std::chrono::duration<double> elapsed = end - start;
//
//    std::cout << "Time to gen key: " << elapsed.count() << "s" << std::endl;
//
//    start = std::chrono::system_clock::now();
//
//    uint2048 message = 53;
////    memcpy(&message, messageText, sizeof(messageText));
//
//    uint2048 cipher = encrypt(message, kp.publicKey);
//
//    std::cout << "CIPHER: ";
//    TEST_printHex(cipher);
//
////    char buff[257];
////    memcpy(buff, &cipher, 256);
////    buff[256] = 0;
//
////    std::cout << ((uint64 *) &cipher)[0] << std::endl;
//
//    uint2048 decrypted = decrypt(cipher, kp.privateKey);
//
////    char buff2[257];
////    memcpy(buff2, &decrypted, 256);
////    buff2[256] = 0;
//
//    std::cout << "DECRYPTED: ";
//    TEST_printHex(decrypted);
//
////    std::cout << ((uint64 *) &decrypted)[0] << std::endl;
//
//    end = std::chrono::system_clock::now();
//    elapsed = end - start;
//    std::cout << "Time to encrypt/decrypt: " << elapsed.count() << "s" << std::endl;

//    AESKey key = generateAESKey();
//
//    TEST_printHex(key.key);

//    AESKey key = generateAESKey();
//    uint64 initVector;
//    CryptoSafeRandom::random(&initVector, sizeof(uint64));
//
//    char msg[] = "Lorem ipsum";
//
//    std::cout << sizeof(msg) << std::endl;
//
//    std::chrono::system_clock::time_point start, end;
//
//    start = std::chrono::system_clock::now();
//
//    uint8 *encrypted = encrypt((uint8 *) msg, sizeof(msg), initVector, key);
//    uint8 *decrypted = decrypt(encrypted, sizeof(msg), initVector, key);
//
//    end = std::chrono::system_clock::now();
//    std::chrono::duration<double> elapsed = end - start;
//
//    std::cout << "Encrypted to: " << encrypted << std::endl;
//    std::cout << "Decrypted to: " << decrypted << std::endl;
//
//    std::cout << "Time: " << elapsed.count() << std::endl;
//
//    delete [] decrypted;
//    delete [] encrypted;

//    RSAKeyPair keyPair = generateRSAKeyPair();
//
//    const char *pw = getpass("Enter password: ");
//
//    uint256 hash = sha256((const uint8 *) pw, strlen(pw));
//
//    delete pw;
//
//    TEST_printHex(keyPair.privateKey.n);
//    TEST_printHex(keyPair.privateKey.d);
//
//    lockPrivateKey(keyPair.privateKey, "/home/matthew/database-manager/keys/test_key.pri", hash);

//    const char *pw = getpass("Enter password: ");
//
//    uint256 hash = sha256((const uint8 *) pw, strlen(pw));
//
//    delete pw;
//
//    PrivateKey key = unlockPrivateKey("/home/matthew/database-manager/keys/test_key.pri", hash);
//
//    TEST_printHex(key.n);
//    TEST_printHex(key.d);

    return 0;
}
#pragma clang diagnostic pop