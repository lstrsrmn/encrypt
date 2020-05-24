//
// Created by matthew on 13/05/2020.
//

#ifndef ENCRYPT_ENCRYPT_H
#define ENCRYPT_ENCRYPT_H

#include <fstream>

#include "aes.h"
#include "keyGenerator.h"

// Encrypt a message of 2048 bits under the provided public key using RSA
uint2048 encrypt(const uint2048 &message, PublicKey key);

// Decrypt a cipher into a 2048 bit message with the provided private key using RSA
uint2048 decrypt(const uint2048 &cipher, PrivateKey key);

// Encrypt an arbitrary size message with a symmetric AES key
uint8 *encrypt(uint8 *message, uint64 messageSize, uint64 initialisationVector, AESKey key);

// Decrypt an arbitrary size message with a symmetric AES key
uint8 *decrypt(uint8 *cipher, uint64 messageSize, uint64 initialisationVector, AESKey key);

// Lock a private key to a file using a password
void lockPrivateKey(PrivateKey key, const std::string& filePath, uint128 passwordHash);

// Extract a private key from a file using a password
PrivateKey unlockPrivateKey(const std::string& filePath, uint128 passwordHash);

#endif //ENCRYPT_ENCRYPT_H
