//
// Created by matthew on 24/05/2020.
//

#ifndef ENCRYPT_SHA_H
#define ENCRYPT_SHA_H

#ifdef _WIN32

#define bswap_32(x) _byteswap_ulong(x)
#define bswap_64(x) _byteswap_uint64(x)

#else

#define bswap_32(x) __builtin_bswap32(x)
#define bswap_64(x) __builtin_bswap64(x)

#endif

#include "BigInteger.h"

#define ROTATE_RIGHT_32(x, shift) ((uint32) (x >> shift) | (x << (32u - shift)))

uint256 sha256(const uint8 *message, uint64 messageSize);
uint256 sha256(const char *message, uint64 messageSize);

#endif //ENCRYPT_SHA_H
