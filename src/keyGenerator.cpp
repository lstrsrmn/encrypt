//
// Created by matthew on 21/05/2020.
//

#include "../include/keyGenerator.h"

RSAKeyPair generateRSAKeyPair() {
    const uint128 one = 1;

    RSAKeyPair keyPair;
    // Generate two large random primes
    uint1024 p = generatePrime<1024>();
    uint1024 q = generatePrime<1024>();

    uint2048 n = p * q;
    uint2048 psi = (p - one) * (q - one);

    BigInteger<64> eBI = 65537, unused;
    uint2048 d;

    extendedEuclidean(eBI, psi, d, unused);

    // If d is negative, keep adding psi until it is positive.
    while (d.value[31] & 0x8000000000000000UL) {
        d = d + psi;
    }

    uint32 e = eBI.value[0];

    keyPair.privateKey = {n, d};
    keyPair.publicKey = {n, e};

    // Overwrite the memory of the large primes to destroy them
    memset(&p, 0, 128);
    memset(&q, 0, 128);
    memset(&psi, 0, 256);

    return keyPair;
}