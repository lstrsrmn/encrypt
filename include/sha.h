//
// Created by matthew on 24/05/2020.
//

#ifndef ENCRYPT_SHA_H
#define ENCRYPT_SHA_H

#include "BigInteger.h"

#define ROTATE_RIGHT_32(x, shift) ((uint32) (x >> shift) | (x << (32u - shift)))

uint256 sha256(const uint8 *message, uint64 messageSize);
uint256 sha256(const char *message, uint64 messageSize);

#endif //ENCRYPT_SHA_H
