//
// Created by matthew on 24/05/2020.
//

#ifndef ENCRYPT_AES_H
#define ENCRYPT_AES_H

#include "key.h"

#define ROTATE_LEFT_8(x, shift) ((uint8) ((x) << (shift)) | ((x) >> (8 - (shift))))

// The number of AES rounds to perform. We are dealing with 128 bit keys, so the number of rounds
// is 10.
const uint8 aesRounds = 10;

// Encrypt a block with AES
uint128 encryptBlock(uint128 blockCode, uint128 roundKeys[aesRounds + 1]);

// Apply the round key to the AES message. Note addition in the Galois field is defined by the xor operator
void addRoundKey(uint128 &message, const uint128 &roundKey);

// Substitute the bytes in the current message under the mapping defined by the Substitution Box.
void substituteBytes(uint128 &message);

// Shift the rows of the message such that the first row isn't shifted, the next row is shifted 1 place, then 2 then 3.
void shiftRows(uint128 &message);

// Mix the columns using matrix multiplication in the Galois field
void mixColumns(uint128 &message);

// Expand the given key into keys for each round
void generateRoundKeys(AESKey key, uint128 roundKeys[aesRounds + 1]);

// Perform a single dot product for the matrix multiplication, again in the Galois field
void rijndaelMixColumn(uint8 *col);

// Substitute a single word under the Substitution box
uint32 substituteWord(uint32 word);

// Rotate the four bytes in the provided work by one place
uint32 rotateWord(uint32 word);

// Simple singleton struct for the Substitution Box. Creates the table and inverse upon first request
struct SubstitutionBox {
public:
    // Returns the substitute for a given byte, based on the sBox.
    static uint8 substitute(uint8 byte);
private:
    // The actual map for the substitution
    static uint8 sBox[256];
    // The map for the inverse of the substitution
    static uint8 invSBox[256];
    // Flag to say whether we have initialised it or not
    static bool initialised;

    // Function to actually craete the sBox and its inverse
    static void initialiseSBox();
};

#endif //ENCRYPT_AES_H
