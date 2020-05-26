#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
//
// Created by matthew on 24/05/2020.
//

#include "../include/sha.h"

uint256 sha256(const uint8 *message, uint64 messageSize) {
    // Fractional parts of the square roots of the first 8 primes
    uint32 hashValues[8] = {
            0x6a09e667,
            0xbb67ae85,
            0x3c6ef372,
            0xa54ff53a,
            0x510e527f,
            0x9b05688c,
            0x1f83d9ab,
            0x5be0cd19
    };

    // Fractional parts of the cube roots of the first 64 primes
    uint32 roundConstants[64] = {
            0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
            0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
            0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
            0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
            0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
            0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
            0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
            0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
    };

    // We add 9 to the message size because we need to append 1 bit to the end of the message (we are working with
    // bytes though so we will add an entire byte) and then 8 bytes to store the message size. We add an extra
    // chunk if the message size + 9 bytes isn't an exact number of 512 (i.e. messageSize != -9 (mod 64)).
    // (messageSize + 9) * 8 / 512, same as (messageSize + 9u) >> 6u.
    uint32 messageChunks = ((messageSize + 9u) >> 6u) + (messageSize % 64u != 55u);

    // Allocate temporary memory for the padded buffer
    uint8 *padded = (uint8 *) alloca(64 * messageChunks);
    // Copy the original message into the start of the buffer
    memcpy(padded, message, messageSize);
    // Set the first byte after the message to 10000000 (0x80 in hex)
    padded[messageSize] = 0x80u;
    // Set all the bytes up to the last 8 to 0s
    memset(&padded[messageSize + 1], 0, messageChunks * 64 - messageSize - 9);
    // Set the last 8 bytes to the size of the message
    memcpy(&padded[messageChunks * 64 - 8], &messageSize, sizeof(uint64));

    for (int chunk = 0; chunk < messageChunks; chunk++) {
        // Declare a message schedule array of 64 32 bit integers
        uint32 messageSchedule[64];
        // Set the first 16 uint32's to the chunk
        memcpy(messageSchedule, &padded[64 * chunk], 64);

        // Extend the message through the rest of the schedule buffer
        for (int i = 16; i < 64; i++) {
            uint32 s0 = ROTATE_RIGHT_32(messageSchedule[i - 15], 7u) ^
                        ROTATE_RIGHT_32(messageSchedule[i - 15], 18u) ^
                        ROTATE_RIGHT_32(messageSchedule[i - 15], 3u);
            uint32 s1 = ROTATE_RIGHT_32(messageSchedule[i - 2], 17u) ^
                        ROTATE_RIGHT_32(messageSchedule[i - 2], 19u) ^
                        ROTATE_RIGHT_32(messageSchedule[i - 2], 10u);
            messageSchedule[i] = messageSchedule[i - 16] + s0 + messageSchedule[i - 7] + s1;
        }

        uint32 workingVars[8];
        memcpy(workingVars, hashValues, sizeof(workingVars));

        // Compress the message
        for (int i = 0; i < 64; i++) {
            uint32 s1 = ROTATE_RIGHT_32(workingVars[4], 6u) ^
                        ROTATE_RIGHT_32(workingVars[4], 11u) ^
                        ROTATE_RIGHT_32(workingVars[4], 25u);
            uint32 ch = (workingVars[4] & workingVars[5]) ^
                        ((~workingVars[4]) & workingVars[6]);
            uint32 t1 = workingVars[7] + s1 + ch + roundConstants[i] + messageSchedule[i];
            uint32 s0 = ROTATE_RIGHT_32(workingVars[0], 2u) ^
                        ROTATE_RIGHT_32(workingVars[0], 13u) ^
                        ROTATE_RIGHT_32(workingVars[0], 22u);
            uint32 maj = (workingVars[0] & workingVars[1]) ^
                         (workingVars[0] & workingVars[2]) ^
                         (workingVars[1] & workingVars[2]);
            uint32 t2 = s0 + maj;

            workingVars[7] = workingVars[6];
            workingVars[6] = workingVars[5];
            workingVars[5] = workingVars[4];
            workingVars[4] = workingVars[3] + t1;
            workingVars[3] = workingVars[2];
            workingVars[2] = workingVars[1];
            workingVars[1] = workingVars[0];
            workingVars[0] = t1 + t2;
        }

        // Add the compressed chunk to the current hash state
        for (int i = 0; i < 8; i++) {
            hashValues[i] += workingVars[i];
        }
    }

    // Return the hash which is just the concatenation of the different values in the hash array
    uint256 hash;
    memcpy(&hash, hashValues, sizeof(hashValues));

    return hash;
}

#pragma clang diagnostic pop