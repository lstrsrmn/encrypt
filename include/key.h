//
// Created by matthew on 21/05/2020.
//

#ifndef ENCRYPT_KEY_H
#define ENCRYPT_KEY_H

#include "BigInteger.h"

// 2048 Bit Public RSA Key
struct PublicKey {
    uint2048 n;
    uint32 e{};

    PublicKey() = default;

    PublicKey(uint2048 n, uint32 e);
};

// 2048 Bit Private RSA Key
struct PrivateKey {
    uint2048 n;
    uint2048 d;

    PrivateKey() = default;

    PrivateKey(uint2048 n, uint2048 d);
};

// 2048 Bit RSA Key Pair
struct RSAKeyPair {
    PublicKey publicKey;
    PrivateKey privateKey;
};

// 128 Bit AES Key
struct AESKey {
    uint128 key;
};

#endif //ENCRYPT_KEY_H
