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

#define PADDED_SIZE(s, p) ((((s) / (p)) + (((s) % (p)) != 0)) * (p))

// Encrypt a message of 2048 bits under the provided public key using 
uint2048 encrypt(const uint2048 &message, PublicKey<32> key);

// Decrypt a cipher into a 2048 bit message with the provided private key using RSA
uint2048 decrypt(const uint2048 &cipher, PrivateKey<32> key);

// Sign a message with a private key (like RSA, but the encrypting key is the private key and the
// decrypting key is public)
BigInteger<24> sign(const uint2048 &message, PrivateKey<24> key);

// Un-sign a message with a public key
BigInteger<24> checkSignature(const uint2048 &cipher, PublicKey<24> key);

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
template<uint32 size>
void lockPrivateKey(PrivateKey<size> key, const std::filesystem::path &filePath, uint256 passwordHash) {
    // Create a random initialisation vector
    uint64 initVector;
    CryptoSafeRandom::random(&initVector, sizeof(uint64));

    // Encrypt the key under the password hash
    uint8 *cipher = encrypt((uint8 *)&key, sizeof(BigInteger<size>) * 2, initVector, { passwordHash });

    // Open the key file
    std::ofstream keyFile;
    keyFile.open(filePath, std::ios::binary);

    // Write first the initialisation vector (in plaintext)
    keyFile.write((const char *)&initVector, sizeof(uint64));
    // Then write the encrypted key
    keyFile.write((const char *)cipher, sizeof(BigInteger<size>) * 2);

    // Close the file
    keyFile.close();

    // Delete the allocated memory
    delete[] cipher;
}

// Extract a private key from a file using a password
template<uint32 size>
PrivateKey<size> unlockPrivateKey(const std::filesystem::path &filePath, uint256 passwordHash) {
    // Open the key file again
    std::ifstream keyFile;
    keyFile.open(filePath, std::ios::binary);

    // Read the initialisation vector
    uint64 initVector;
    keyFile.read((char *)&initVector, sizeof(uint64));

    // Read the cipher text
    uint8 *cipher = (uint8 *)alloca(sizeof(BigInteger<size>) * 2);
    keyFile.read((char *)cipher, sizeof(BigInteger<size>) * 2);

    // Create the key object
    PrivateKey<size> key;
    memcpy((uint8 *)&key, decrypt(cipher, sizeof(BigInteger<size>) * 2, initVector, { passwordHash }), sizeof(BigInteger<size>) * 2);

    keyFile.close();

    return key;
}

void lockData(uint8 *data, unsigned size, const std::filesystem::path &filePath, uint256 passwordHash);

uint8 *unlockData(const std::filesystem::path &filePath, uint256 passwordHash, unsigned *size = nullptr);

std::string unlockStringData(const std::filesystem::path &filePath, uint256 passwordHash);

// Write a private key in plaintext
template<uint32 size>
void writePlaintextPrivateKey(PrivateKey<size> key, const std::filesystem::path &filePath) {
    std::ofstream keyFile;
    keyFile.open(filePath, std::ios::binary);

    keyFile.write((const char *)&key.n, sizeof(BigInteger<size>));
    keyFile.write((const char *)&key.d, sizeof(BigInteger<size>));

    keyFile.close();
}

// Read a private key from plaintext
template<uint32 size>
PrivateKey<size> readPlaintextPrivateKey(const std::filesystem::path &filePath) {
    std::ifstream keyFile;
    keyFile.open(filePath, std::ios::binary);

    PrivateKey<size> key;

    keyFile.read((char *)&key.n, sizeof(BigInteger<size>));
    keyFile.read((char *)&key.d, sizeof(BigInteger<size>));

    keyFile.close();

    return key;
}

// Write a public key (in plaintext; we don't care if it is read)
template<uint32 size>
void writePublicKey(PublicKey<size> key, const std::filesystem::path &filePath) {
    std::ofstream keyFile;
    keyFile.open(filePath, std::ios::binary);

    keyFile.write((const char *)&key.n, sizeof(BigInteger<size>));
    keyFile.write((const char *)&key.e, sizeof(uint32));

    keyFile.close();
}

// Read a public key back in from a file
template<uint32 size>
PublicKey<size> readPublicKey(const std::filesystem::path &filePath) {
    std::ifstream keyFile;
    keyFile.open(filePath, std::ios::binary);

    PublicKey<size> key;

    keyFile.read((char *)&key.n, sizeof(BigInteger<size>));
    keyFile.read((char *)&key.e, sizeof(uint32));

    keyFile.close();

    return key;
}

#endif //ENCRYPT_ENCRYPT_H
