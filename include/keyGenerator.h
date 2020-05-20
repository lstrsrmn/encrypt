#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
//
// Created by matthew on 14/05/2020.
//

#ifndef ENCRYPT_KEYGENERATOR_H
#define ENCRYPT_KEYGENERATOR_H

#include "BigInteger.h"
#include "safeRandom.h"

// Generate a prime BigInteger with the given size
template<int size>
BigInteger<size> generatePrime();

// Test if a given BigInteger is prime, probabilistically with the Miller-Rabin test
template<int size>
bool testPrime(BigInteger<size> p, int security);

template<int size>
bool millerRabin(BigInteger<size> p, BigInteger<size> d, uint32 r, BigInteger<size> pSub1, BigInteger<size> inv, uint32 rExp, BigInteger<size> rMask);


template<int size>
BigInteger<size> generatePrime() {
    BigInteger<size> prime;
    uint8 *_pBuff = (uint8 *) &prime;
    CryptoSafeRandom::random(_pBuff, size / 8);
    _pBuff[0] |= 1;

    while (!testPrime(prime, 6)) {
        CryptoSafeRandom::random(_pBuff, size / 8);
        _pBuff[0] |= 1;
    }

    return prime;
}

template<int size>
bool testPrime(BigInteger<size> p, int security) {
    // We need to use p-1 a few times, so it is quicker to calculate it once here
    BigInteger<size> pSub1 = p - BigInteger<size>(1);

    // Next we factor nSub1 = 2^r*d. We can do this simply by counting the number of trailing zeros and then
    // right shifting by them
    uint32 r = 0;

    // To do this fast, we use the raw data of the number
    uint64 *nSub1Raw = (uint64 *) &pSub1;

    // Loop through each uint64 starting from the least significant
    for (int i = 0; i < size / 64; i++) {
        // If this uint64 is non zero and we haven't yet broken, the least significant 1 is here
        if (nSub1Raw[i]) {
            r += __builtin_ctzl(nSub1Raw[i]);
            break;
        }
        // If this uint64 was all 0s, then we just add 64 to the current r
        r += 64;
    }

    // Now d is simply pSub1 / 2^r, or pSub1 >> r
    BigInteger<size> d = pSub1 >> r;

    // Because the modulus is constant, we can also calculate the modular inverse and mask before the loop
    // so we only have to run the Euclidean algorithm once per check
    uint32 rExp = size - p.countLeadingZeros();
    BigInteger<size> rMask = getAuxiliaryModulusMask<size>(rExp);
    BigInteger<size> inv = modularInverse(p, rExp);

    // We now check the number using the Miller Rabin test. We know that if the test returns false then
    // the number is definitely composite, so we can return early in that case
    for (int check = 0; check < security; check++) {
        if (!millerRabin(p, d, r, pSub1, inv, rExp, rMask)) {
            return false;
        }
    }

    // If none of the checks failed, we can say pretty certainly that the number is prime
    return true;
}

template<int size>
bool millerRabin(BigInteger<size> p, BigInteger<size> d, uint32 r, BigInteger<size> pSub1, BigInteger<size> inv, uint32 rExp, BigInteger<size> rMask) {
    BigInteger<size> a;
    CryptoSafeRandom::random(&a, size / 8);

    BigInteger<size * 2> rBase = a;
    rBase = rBase << rExp;
    BigInteger<size> montgomeryBase = rBase % p;

    BigInteger<size> power = modularExponent(montgomeryBase, d, p, inv, rExp, rMask);

    if (power == 1 || power == pSub1) {
        return true;
    }

    for (int j = 0; j < r; j++) {
        power = (power * power) % p;

        if (power == 1) {
            return false;
        }
        if (power == pSub1) {
            return true;
        }
    }
    return false;
}

#endif //ENCRYPT_KEYGENERATOR_H

#pragma clang diagnostic pop