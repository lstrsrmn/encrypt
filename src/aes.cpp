//
// Created by matthew on 24/05/2020.
//

#include "../include/aes.h"

uint128 encryptBlock(uint128 blockCode, uint128 roundKeys[aesRounds + 1]) {
    // Add the initial round key
    addRoundKey(blockCode, roundKeys[0]);
    for (int round = 0; round < aesRounds; round++) {
        // Substitute bytes in the current message
        substituteBytes(blockCode);
        // Shift the rows of the current message
        shiftRows(blockCode);

        // If this isn't the final round, mix the columns (this doesn't add any extra security in the final round)
        if (round != aesRounds - 1) {
            mixColumns(blockCode);
        }

        // Apply the round key for this round
        addRoundKey(blockCode, roundKeys[round + 1]);
    }

    return blockCode;
}

void addRoundKey(uint128 &message, const uint128 &roundKey) {
    message ^= roundKey;
}

void substituteBytes(uint128 &message) {
    uint8 *bytes = (uint8 *) &message;

    for (uint8 b = 0; b < 16; b++) {
        bytes[b] = SubstitutionBox::substitute(bytes[b]);
    }
}

void shiftRows(uint128 &message) {
    uint8 copy[sizeof(uint128)];
    memcpy(copy, &message, sizeof(uint128));

    uint8 *messageRaw = (uint8 *) &message;

    messageRaw[1] = copy[5];
    messageRaw[5] = copy[9];
    messageRaw[9] = copy[13];
    messageRaw[13] = copy[1];

    messageRaw[2] = copy[10];
    messageRaw[6] = copy[14];
    messageRaw[10] = copy[2];
    messageRaw[14] = copy[6];

    messageRaw[3] = copy[15];
    messageRaw[7] = copy[3];
    messageRaw[11] = copy[7];
    messageRaw[15] = copy[11];
}

void mixColumns(uint128 &message) {
    // Multiplies each row by the matrix:
    // [ 2 3 1 1 ]
    // [ 1 2 3 1 ]
    // [ 1 1 2 3 ]
    // [ 3 1 1 2 ]
    uint8 *bytes = (uint8 *) &message;

    // Multiply each column by the matrix (first column = first four bytes; we use column major order)
    rijndaelMixColumn(&bytes[0]);
    rijndaelMixColumn(&bytes[4]);
    rijndaelMixColumn(&bytes[8]);
    rijndaelMixColumn(&bytes[12]);
}

void generateRoundKeys(AESKey key, uint128 roundKeys[aesRounds + 1]) {
    uint32 *words = (uint32 *) roundKeys;
    memcpy(words, &key.key, sizeof(uint32) * 4);

    uint32 roundConstants[aesRounds + 1];
    uint8 *rcRaw = (uint8 *) roundConstants;
    // Initialise all the round constants to 0
    memset(rcRaw, 0, sizeof(uint32) * (aesRounds + 1));
    // The first round constant will have 1 in the upper byte
    uint8 rc = 0x01u;
    rcRaw[3] = rc;

    for (uint8 i = 0; i < aesRounds; i++) {
        // rc represents what will be set in the upper byte of the corresponding round constant. Here we define
        // rc as a recurrence relation

        // If rc is going to overflow after being multiplied by 2, take it under the Rijndael modulus,
        // otherwise just leave it as is.
        if (rc < 0x80u) {
            rc = 2 * rc;
        } else {
            rc = 2 * rc;
            rc ^= 0x1Bu;
        }
        // Set the most significant byte of the current round constant to rc
        rcRaw[i * 4 + 7] = rc;
    }

    // Set the value in each word with this recurrence relation
    for (int i = 4; i < (aesRounds + 1) * 4; i++) {
        if (i % 4 == 0) {
            words[i] = words[i - 4] ^ substituteWord(rotateWord(words[i - 1])) ^ roundConstants[i / 4];
        }
        else {
            words[i] = words[i - 4] ^ words[i - 1];
        }
    }
}

void rijndaelMixColumn(uint8 *col) {
    // Mix columns matrix (for a single row) in the Galois Field for AES. Note, addition in this field is
    // defined by xor and multiplication is taken modulo 0x11B.

    // a is will be set to a copy of col
    uint8 a[4];
    // b is col left shifted by 1, or col * x in the GF
    uint8 b[4];

    for (uint8 i = 0; i < 4; i++) {
        a[i] = col[i];
        b[i] = col[i] << 1u;
        // If col had the high bit set, take b under the modulus of 0x11B, the AES multiplication modulo
        b[i] ^= 0x1Bu & ((col[i] >> 7u) ? 0xFFu : 0x00u);
    }

    // 2 * a0 + a3 + a2 + 3 * a1 in the GF. 3 * a1 = b[1] + a[1] because b = 2 * col.
    col[0] = b[0] ^ a[3] ^ a[3] ^ a[2] ^ b[1] ^ a[1];
    // 2 * a1 + a0 + a3 + 3 * a2
    col[1] = b[1] ^ a[0] ^ a[3] ^ b[2] ^ a[2];
    // 2 * a2 + a1 + a0 + 3 * a3
    col[2] = b[2] ^ a[1] ^ a[0] ^ b[3] ^ a[3];
    // 2 * a3 + a2 + a1 + 3 * a0
    col[3] = b[3] ^ a[2] ^ a[1] ^ b[0] ^ a[0];
}

uint32 substituteWord(uint32 word) {
    uint8 *bytes = (uint8 *) &word;
    uint32 sub;
    uint8 *subBytes = (uint8 *) &sub;

    subBytes[0] = SubstitutionBox::substitute(bytes[0]);
    subBytes[1] = SubstitutionBox::substitute(bytes[1]);
    subBytes[2] = SubstitutionBox::substitute(bytes[2]);
    subBytes[3] = SubstitutionBox::substitute(bytes[3]);

    return sub;
}

uint32 rotateWord(uint32 word) {
    uint8 *bytes = (uint8 *) &word;
    uint32 rot;
    uint8 *rotBytes = (uint8 *) &rot;

    rotBytes[0] = bytes[1];
    rotBytes[1] = bytes[2];
    rotBytes[2] = bytes[3];
    rotBytes[3] = bytes[0];

    return rot;
}

uint8 SubstitutionBox::substitute(uint8 byte) {
    // If we haven't generated the substitution box, first generate it
    if (!initialised) {
        initialiseSBox();
    }

    return sBox[byte];
}

void SubstitutionBox::initialiseSBox() {
    // Standard algorithm to populate the substitution box. This is deterministic so it can be recreated
    uint8 p = 0x01u, q = 0x01u;

    do {
        p = p ^ (p << 0x01u) ^ (p & 0x80u ? 0x1Bu : 0x00u);
        q ^= q << 0x01u;
        q ^= q << 0x02u;
        q ^= q << 0x04u;
        q ^= q & 0x80u ? 0x09u : 0x00u;

        uint8 value = (q ^ ROTATE_LEFT_8(q, 0x01u) ^ ROTATE_LEFT_8(q, 0x02u) ^
                       ROTATE_LEFT_8(q, 0x03u) ^ ROTATE_LEFT_8(q, 0x04u)) * 0x63u;

        // Populate the sub box and the inverse with this pair
        sBox[p] = value;
        invSBox[value] = p;
    } while (p != 0x01u);
    sBox[0] = 0x63u;
    invSBox[0x63u] = 0;

    initialised = true;
}

