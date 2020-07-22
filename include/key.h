//
// Created by matthew on 21/05/2020.
//

#ifndef ENCRYPT_KEY_H
#define ENCRYPT_KEY_H

#include "BigInteger.h"

// Public Key class of generic size.
// The "e" value will always be a 32 bit unsigned integer
template<uint32 size>
struct PublicKey {
    BigInteger<size> n;
    uint32 e{};

    PublicKey() = default;

    PublicKey(BigInteger<size> n, uint32 e);
};

template<uint32 size>
PublicKey<size>::PublicKey(BigInteger<size> n, uint32 e) {
    this->n = n;
    this->e = e;
}

// Private Key class of generic size
template<uint32 size>
struct PrivateKey {
    BigInteger<size> n;
    BigInteger<size> d;

    PrivateKey() = default;

    PrivateKey(BigInteger<size> n, BigInteger<size> d);
};

template<uint32 size>
PrivateKey<size>::PrivateKey(BigInteger<size> n, BigInteger<size> d) {
    this->n = n;
    this->d = d;
}

template<uint32 size>
struct KeyPair {
    typedef PublicKey<size> Public;
    typedef PrivateKey<size> Private;

    PublicKey<size> publicKey;
    PrivateKey<size> privateKey;
};

// 2048 Bit RSA Key Pair
typedef KeyPair<32> RSAKeyPair;

// 1536 Bit Digital Signature Key Pair
typedef KeyPair<24> DigitalSignatureKeyPair;

// 128 Bit AES Key
struct AESKey {
    uint128 key;
};

#endif //ENCRYPT_KEY_H
