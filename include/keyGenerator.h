#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
//
// Created by matthew on 14/05/2020.
//

#ifndef ENCRYPT_KEYGENERATOR_H
#define ENCRYPT_KEYGENERATOR_H

#include "BigInteger.h"
#include "safeRandom.h"
#include "key.h"

// Generate a prime BigInteger with the given size
template<int size>
BigInteger<size> generatePrime(int security = 12);

// Test if a given BigInteger is prime, probabilistically with the Miller-Rabin test
template<int size>
bool testPrime(BigInteger<size> p, int security);

// Miller-Rabin test to test a number with a single witness
template<int size>
bool
millerRabin(BigInteger<size> p, BigInteger<size> d, uint32 r, BigInteger<size> pSub1, BigInteger<size> inv, uint32 rExp,
            BigInteger<size> rMask);

// Generate an asymmetric Public-Private key pair
RSAKeyPair generateRSAKeyPair();

// Generate a symmetric AES key
AESKey generateAESKey();

template<int size>
BigInteger<size> generatePrime(int security) {
    // Initialise the prime
    BigInteger<size> prime;
    // Get a pointer to the data stored in the prime
    uint8 *_pBuff = (uint8 *) &prime;
    // Generate a random number and set the least significant bit to 1 (if it is even it is definitely not prime
    // so there is no point in check it)
    CryptoSafeRandom::random(_pBuff, size / 8);
    _pBuff[0] |= 1;

    // Keep testing until the number is prime
    while (!testPrime(prime, security)) {
        // If the number was composite, make a new one
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
bool
millerRabin(BigInteger<size> p, BigInteger<size> d, uint32 r, BigInteger<size> pSub1, BigInteger<size> inv, uint32 rExp,
            BigInteger<size> rMask) {
    // Generate a random witness number
    BigInteger<size> a;
    CryptoSafeRandom::random(&a, size / 8);

    // Convert the witness to Montgomery form
    BigInteger<size * 2> rBase = a;
    rBase = rBase << rExp;
    BigInteger<size> montgomeryBase = rBase % p;

    // Calculate a^d mod p
    BigInteger<size> power = modularExponent(montgomeryBase, d, p, inv, rExp, rMask);

    // By Fermat's Little Theorem, we know that if p is prime, a^(p-1) = 1 (mod p) for all a (except 0)
    // As we know that p-1 = d * 2^r, if p is prime, then each time we take the square root, we either get
    // 1 or negative 1. This process will end when one of the roots is -1, as the square root of this is not
    // 1 or -1. Therefore, if we keep taking roots till we can't any more, and we still end up with 1 or -1,
    // the number is probably prime (or more precisely, we have no evidence it is composite)
    if (power == 1 || power == pSub1) {
        return true;
    }

    // Next we check every following square of the first power.
    for (int j = 0; j < r; j++) {
        power = (power * power) % p;

        // If one of these comes to 1 and we haven't broken, this means we squared a value which came to 1 without
        // it having been 1 or -1 previously which means that the number is certainly composite, so here we return
        // false which in the prime check will return composite immediately
        if (power == 1) {
            return false;
        }
        // If the square came to -1, however, we know that the next square will be 1 then 1 again etc all the way
        // up to a^(p - 1), so the number is probably prime
        if (power == pSub1) {
            return true;
        }
    }

    // If we got to a^(p - 1) without finding any 1s or -1s, the number is definitely composite
    return false;
}

#endif //ENCRYPT_KEYGENERATOR_H

#pragma clang diagnostic pop