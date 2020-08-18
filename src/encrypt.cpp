//
// Created by matthew on 13/05/2020.
//

#include "../include/encrypt.h"

uint8 SubstitutionBox::sBox[256];
uint8 SubstitutionBox::invSBox[256];
bool SubstitutionBox::initialised = false;

uint2048 encrypt(const uint2048 &message, PublicKey<32> key) {
    return message.exp(key.e, key.n);
}

uint2048 decrypt(const uint2048 &cipher, PrivateKey<32> key) {
    return cipher.exp(key.d, key.n);
}

BigInteger<24> sign(const uint2048 &message, PrivateKey<24> key) {
    return message.exp(key.d, key.n);
}

BigInteger<24> checkSignature(const uint2048 &cipher, PublicKey<24> key) {
    return cipher.exp(key.e, key.n);
}

uint8 *encrypt(const uint8 *message, uint64 messageSize, uint64 initialisationVector, AESKey key) {
    // Get the number of full message blocks (each block is 16 bytes)
    uint64 messageBlocks = messageSize / 16;
    uint8 finalMessageSize = messageSize % 16;

    // Allocate memory for the cipher (on the heap, so we can return it)
    uint64 *cipher = (uint64 *) malloc(sizeof(uint128) * (messageBlocks + (finalMessageSize != 0)));

    encrypt(message, messageSize, cipher, initialisationVector, key);

    return (uint8 *) cipher;
}

uint8 *decrypt(const uint8 *message, uint64 messageSize, uint64 initialisationVector, AESKey key) {
    return encrypt(message, messageSize, initialisationVector, key);
}

void encrypt(const uint8 *message, uint64 messageSize, void *outBuffer, uint64 initialisationVector, AESKey key) {
    uint128 roundKeys[aesRounds + 1];
    generateRoundKeys(key, roundKeys);

    // We are going to concatenate the counter to a random number used once, which is passed in by the
    // initialisation vector, and then use this as our code to encrypt. We will then xor each block
    // with the corresponding message block.
    uint128 blockCode;
    uint64 *blockCodeRaw = (uint64 *) &blockCode;
    blockCodeRaw[1] = initialisationVector;

    // Get the number of full message blocks (each block is 16 bytes)
    uint64 messageBlocks = messageSize / 16;

    uint8 finalMessageSize = messageSize % 16;

    // Allocate memory for the cipher (on the heap, so we can return it)
    uint64 *cipher = (uint64 *) outBuffer;

    for (uint64 i = 0; i < messageBlocks; i++) {
        // Set the lower uint64 to the block index
        blockCodeRaw[0] = i;
        // Encrypt the counter under the AES key
        uint128 encryptedBlock = encryptBlock(blockCode, roundKeys);

        // Set the matching blocks in the cipher to the encrypted block xor the message block
        cipher[i * 2] = ((uint64 *) message)[i * 2] ^ ((uint64 *) &encryptedBlock)[0];
        cipher[i * 2 + 1] = ((uint64 *) message)[i * 2 + 1] ^ ((uint64 *) &encryptedBlock)[1];
    }

    if (finalMessageSize) {
        // Set the lower uint64 to the block index
        blockCodeRaw[0] = messageBlocks;
        // Encrypt the counter under the AES key
        uint128 encryptedBlock = encryptBlock(blockCode, roundKeys);

        // Allocate memory for the final block and pad with 0s. This is allocated on the stack, so is
        // destroyed automatically.
        uint8 *finalMessage = (uint8 *) alloca(sizeof(uint8) * 16);
        memcpy(finalMessage, &message[messageBlocks * 16], finalMessageSize);
        memset(&finalMessage[finalMessageSize], 0, 16 - finalMessageSize);

        // Set the matching blocks in the cipher to the encrypted block xor the message block
        cipher[messageBlocks * 2] = ((uint64 *) finalMessage)[0] ^ ((uint64 *) &encryptedBlock)[0];
        cipher[messageBlocks * 2 + 1] = ((uint64 *) finalMessage)[1] ^ ((uint64 *) &encryptedBlock)[1];
    }
}

void decrypt(const uint8 *cipher, uint64 messageSize, void *outBuffer, uint64 initialisationVector, AESKey key) {
    encrypt(cipher, messageSize, outBuffer, initialisationVector, key);
}

void lockData(uint8 *data, unsigned size, const std::filesystem::path &filePath, uint256 passwordHash) {
    // Create a random initialisation vector
    uint64 initVector;
    CryptoSafeRandom::random(&initVector, sizeof(uint64));

    // Encrypt the key under the password hash
    uint8 *cipher = encrypt(data, size, initVector, { passwordHash });

    // Open the key file
    std::ofstream dataFile;
    dataFile.open(filePath, std::ios::binary);

    // Write first the initialisation vector (in plaintext)
    dataFile.write((const char *) &initVector, sizeof(uint64));
    // Write the data size
    dataFile.write((const char *) &size, sizeof(unsigned));
    // Then write the encrypted key
    dataFile.write((const char *) cipher, size);

    // Close the file
    dataFile.close();

    // Delete the allocated memory
    delete[] cipher;
}

uint8 *unlockData(const std::filesystem::path &filePath, uint256 passwordHash, unsigned *size) {
    // Open the key file again
    std::ifstream dataFile;
    dataFile.open(filePath, std::ios::binary);

    // Read the initialisation vector
    uint64 initVector;
    dataFile.read((char *) &initVector, sizeof(uint64));

    // Read the data size
    unsigned dataSize;
    dataFile.read((char *) &dataSize, sizeof(unsigned));

    if (size) {
        *size = dataSize;
    }

    // Read the cipher text
    uint8 *cipher = (uint8 *) alloca(PADDED_SIZE(dataSize, 16u));
    dataFile.read((char *) cipher, PADDED_SIZE(dataSize, 16u));

    // Create the key object
    uint8 *data = (uint8 *) malloc(dataSize);
    memcpy(data, decrypt(cipher, PADDED_SIZE(dataSize, 16u), initVector, { passwordHash }), dataSize);

    dataFile.close();

    return data;
}

std::string unlockStringData(const std::filesystem::path &filePath, uint256 passwordHash) {
    unsigned size;
    uint8 *data = unlockData(filePath, passwordHash, &size);
    return std::string((const char *) data, size);
}