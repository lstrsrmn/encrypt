//
// Created by matthew on 21/05/2020.
//

#include "../include/keyGenerator.h"

RSAKeyPair generateRSAKeyPair() {
    const uint128 one = 1;

    RSAKeyPair keyPair;
    // Generate two large random primes
    uint1024 p = generatePrime<16>();
    uint1024 q = generatePrime<16>();

    uint2048 n = p * q;
    uint2048 psi = (p - one) * (q - one);

    BigInteger<1> e = 0x10001, unused;
    uint2048 d;

    extendedEuclidean(e, psi, d, unused);

    // If d is negative, keep adding psi until it is positive.
    while (d.pseudoNegative()) {
        d = d + psi;
    }

    keyPair.privateKey = {n, d};
    keyPair.publicKey = {n, 0x10001};

    // Overwrite the memory of the large primes to destroy them
    memset(&p, 0, 128);
    memset(&q, 0, 128);
    memset(&psi, 0, 256);

    return keyPair;
}

DigitalSignatureKeyPair generateDigitalSignatureKeyPair() {
    const uint128 one = 1;

    DigitalSignatureKeyPair keyPair;
    // Generate two large random primes
    BigInteger<12> p = generatePrime<12>();
    BigInteger<12> q = generatePrime<12>();

    BigInteger<24> n = p * q;
    BigInteger<24> psi = (p - one) * (q - one);

    BigInteger<1> e = 0x10001, unused;
    BigInteger<24> d;

    extendedEuclidean(e, psi, d, unused);

    // If d is negative, keep adding psi until it is positive.
    while (d.pseudoNegative()) {
        d = d + psi;
    }

    keyPair.privateKey = { n, d };
    keyPair.publicKey = { n, 0x10001 };

    // Overwrite the memory of the large primes to destroy them
    memset(&p, 0, 96);
    memset(&q, 0, 96);
    memset(&psi, 0, 192);

    return keyPair;
}

AESKey generateAESKey() {
    // An AES key is just a random 128 bit number. It does not need any special properties such as primality
    AESKey key;
    CryptoSafeRandom::random(&key.key, sizeof(uint128));

    return key;
}