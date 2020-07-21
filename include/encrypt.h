//
// Created by matthew on 13/05/2020.
//

#ifndef ENCRYPT_ENCRYPT_H
#define ENCRYPT_ENCRYPT_H

#include <fstream>
#include <filesystem>

#include "aes.h"
#include "keyGenerator.h"
#include "sha.h"

// Encrypt a message of 2048 bits under the provided public key using RSA
uint2048 encrypt(const uint2048 &message, PublicKey key);

// Decrypt a cipher into a 2048 bit message with the provided private key using RSA
uint2048 decrypt(const uint2048 &cipher, PrivateKey key);

// Sign a message with a private key (like RSA, but the encrypting key is the private key and the
// decrypting key is public)
uint2048 sign(const uint2048 &message, PrivateKey key);

// Un-sign a message with a public key
uint2048 checkSignature(const uint2048 &cipher, PublicKey key);

// Encrypt an arbitrary size message with a symmetric AES key
uint8 *encrypt(const uint8 *message, uint64 messageSize, uint64 initialisationVector, AESKey key);

// Decrypt an arbitrary size message with a symmetric AES key
uint8 *decrypt(const uint8 *cipher, uint64 messageSize, uint64 initialisationVector, AESKey key);

// Encrypt an arbitrary size message with a symmetric AES key and provide an out buffer, rather than generating one
// in the method
void encrypt(const uint8 *message, uint64 messageSize, void *outBuffer, uint64 initialisationVector, AESKey key);

// Decrypt an arbitrary size message with a symmetric AES key and provide an out buffer, rather than generating one
// in the method
void decrypt(const uint8 *message, uint64 messageSize, void *outBuffer, uint64 initialisationVector, AESKey key);

// Lock a private key to a file using a password
void lockPrivateKey(PrivateKey key, const std::filesystem::path &filePath, uint256 passwordHash);

// Extract a private key from a file using a password
PrivateKey unlockPrivateKey(const std::filesystem::path &filePath, uint256 passwordHash);

// Write a public key (in plaintext; we don't care if it is read)
void writePublicKey(PublicKey key, const std::filesystem::path &filePath);

// Read a public key back in from a file
PublicKey readPublicKey(const std::filesystem::path &filePath);

#endif //ENCRYPT_ENCRYPT_H
