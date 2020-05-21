//
// Created by matthew on 13/05/2020.
//

#ifndef ENCRYPT_BIGINTEGER_H
#define ENCRYPT_BIGINTEGER_H

#include <iostream>
#include <cstring>

template<int size>
struct BigInteger;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long int uint64;
typedef BigInteger<128> uint128;
typedef BigInteger<256> uint256;
typedef BigInteger<512> uint512;
typedef BigInteger<1024> uint1024;
typedef BigInteger<2048> uint2048;
typedef BigInteger<4096> uint4096;

#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)

// The REDC function "cleans" after the product of two integers in Montgomery form. When we create the auxiliary
// modulus R, we get the two inputs in the form aR (mod n) and bR (mod n). If we want to multiply these together,
// we get abRR (mod n), which is no longer in the Montgomery form. The REDC function essentially takes in the
// result of the multiplication, and multiplies by the multiplicative inverse of R, and takes it under modulus N,
// returning abRRR^(-1) (mod n), or simply abR (mod n). It does this, however, without ever requiring to take a
// modulus with respect to n (slow) directly. It also serves to take a number back out of Montgomery form when we
// have finished modular exponentiation
template<int sizeMod, int sizeValue>
BigInteger<sizeMod> redc(BigInteger<sizeMod> auxModMask, uint32 auxModExp,
                         BigInteger<sizeMod> mod, BigInteger<sizeMod> modPrime,
                         BigInteger<sizeValue> value);

// The Extended Euclidean GCD algorithm returns the greatest common denominator between two numbers, and also
// computes x and y such that ax + by = gcd(a, b)
template<int sizeA, int sizeB>
void extendedEuclidean(const BigInteger<sizeA> &a, const BigInteger<sizeB> &b, BigInteger<sizeB> &x, BigInteger<sizeA> &y);

// UNUSED Karatsuba Multiplication
template<int sizeA, int sizeB>
void multiply(uint32 *a, uint32 *b, uint32 *r);

template<int sizeBase, int sizeExp, int sizeMod>
BigInteger<sizeMod> modularExponent(
        const BigInteger<sizeBase> montgomeryBase,
        const BigInteger<sizeExp> exp,
        const BigInteger<sizeMod> mod,
        const BigInteger<sizeBase> inv,
        uint32 rExp,
        const BigInteger<sizeMod> rMask);

template<int sizeBase, int sizeMod>
BigInteger<sizeMod> modularExponent(
        const BigInteger<sizeBase> montgomeryBase,
        const uint64 exp,
        const BigInteger<sizeMod> mod,
        const BigInteger<sizeBase> inv,
        uint32 rExp,
        const BigInteger<sizeMod> rMask);

template<int size>
BigInteger<size> getAuxiliaryModulusMask(uint32 modExponent);

template<int sizeMod>
BigInteger<sizeMod> modularInverse(BigInteger<sizeMod> mod, uint32 auxModExp);

// Testing function to print a BigInteger as a hexidecimal value
template<int size>
void TEST_printHex(BigInteger<size> value) {
    const char *hex = "0123456789ABCDEF";
    uint8 *bytes = (uint8 *) &value;

    std::cout << "0x";

    for (int i = (size / 8) - 1; i>= 0; i--) {
        uint8 v = bytes[i];
        char upper = hex[(v >> 4) & 0xF];
        char lower = hex[v & 0xF];

        std::cout << upper << lower;
    }

    std::cout << std::endl;
}

template<int size>
void TEST_printHex(uint8 *value) {
    const char *hex = "0123456789ABCDEF";

    std::cout << "0x";

    for (int i = size - 1; i >= 0; i--) {
        uint8 v = value[i];
        char upper = hex[(v >> 4) & 0xF];
        char lower = hex[v & 0xF];

        std::cout << upper << lower;
    }

    std::cout << std::endl;
}

template<int size>
struct BigInteger {
public:
    // Addition operator of two arbitrarily sized BigIntegers
    template<int sizeOther>
    BigInteger<MAX(size, sizeOther)> operator+(BigInteger<sizeOther> other) const;

    // Negation operator using two's complement
    BigInteger<size> operator-() const;

    // Subtraction operator of two arbitrarily sized BigIntegers
    template<int sizeOther>
    BigInteger<MAX(size, sizeOther)> operator-(BigInteger<sizeOther> other) const;

    // Multiplication operator of two arbitrarily sized BigIntegers
    template<int sizeOther>
    BigInteger<MAX(size, sizeOther) * 2> operator*(BigInteger<sizeOther> other) const;

    // Division operator between two arbitrarily sized BigIntegers
    template<int sizeDivisor>
    BigInteger<size> operator/(BigInteger<sizeDivisor> divisor) const;

    // Modulus operator between two arbitrarily sized BigIntegers
    template<int sizeMod>
    BigInteger<sizeMod> operator%(BigInteger<sizeMod> mod) const;

    // Calculate the quotient and remainder of a division
    template<int sizeDivisor>
    void
    modAndDivide(BigInteger<sizeDivisor> divisor, BigInteger<size> &quotient, BigInteger<sizeDivisor> &remainder) const;

    // Left bit shift operator
    BigInteger<size> operator<<(uint32 shift) const;

    // Right bit shift operator
    BigInteger<size> operator>>(uint32 shift) const;

    // Left shift assignment operator
    void operator<<=(uint32 shift);

    // Right shift assignment operator
    void operator>>=(uint32 shift);

    // Bitwise and operator
    template<int sizeOther>
    BigInteger<MIN(size, sizeOther)> operator&(BigInteger<sizeOther> other) const;

    // Bitwise or operator
    template<int sizeOther>
    BigInteger<MAX(size, sizeOther)> operator|(BigInteger<sizeOther> other) const;

    // Bitwise not operator
    BigInteger<size> operator~() const;

    // Equality operator
    template<int sizeOther>
    bool operator==(BigInteger<sizeOther> other) const;

    bool operator==(uint64 other) const;

    // Inequality operator
    template<int sizeOther>
    bool operator!=(BigInteger<sizeOther> other) const;

    bool operator!=(uint64 other) const;

    // Strict greater than operator
    template<int sizeOther>
    bool operator>(BigInteger<sizeOther> other) const;

    // Strict less than operator
    template<int sizeOther>
    bool operator<(BigInteger<sizeOther> other) const;

    // Greater than or equal to operator
    template<int sizeOther>
    bool operator>=(BigInteger<sizeOther> other) const;

    // Less than or equal to operator
    template<int sizeOther>
    bool operator<=(BigInteger<sizeOther> other) const;

    // Exponentiation operator of two arbitrarily sized BigIntegers, under a provided modulus ring
    template<int sizeExponent, int sizeMod>
    BigInteger<sizeMod> exp(BigInteger<sizeExponent> exp, BigInteger<sizeMod> mod) const;

    template<int sizeMod>
    BigInteger<sizeMod> exp(uint64 exp, BigInteger<sizeMod> mod) const;

    // Count the number of leading zeros of the number
    uint32 countLeadingZeros() const;

    // Default constructor for BigInteger types. Initialises the value to 0
    BigInteger();

    // Constructor from a standard integer; can be a literal
    BigInteger(const uint64 &val);

    template<int sizeNew>
    operator BigInteger<sizeNew>();

    // Constructor from an arbitrarily sized BigInteger
    template<int sizeOther>
    BigInteger(const BigInteger<sizeOther> &val);

public:
    // Create an array to store the number in memory. The size parameter
    // is given in bits, so the actual value is the size divided by 64.
    // This is defaulted to 0.
    // The least significant byte is the first byte of this array
    uint64 value[size / 64] = {0};
};

struct REDCAuxiliaryModulus {

};

template<int sizeMod, int sizeValue>
BigInteger<sizeMod> redc(BigInteger<sizeMod> auxModMask, uint32 auxModExp,
                         BigInteger<sizeMod> mod, BigInteger<sizeMod> modPrime,
                         BigInteger<sizeValue> value) {
    // Set the first intermediary variable m
    BigInteger<sizeMod> m = ((value & auxModMask) * modPrime) & auxModMask;
    // The second intermediary variable is t = (value + (m * mod)) / r. However, an issue arises if
    // the sum overflows, as we will essentially be subtracting more than we should. Hence, we calculate the sum
    // manually here.
    BigInteger<sizeMod * 2> sum = (m * mod);

    // Initialise the carry to false
    bool carry = false;

    // Loop through the size of the value we are adding and add each uint64
    for (int i = 0; i < sizeValue / 64; i++) {
        sum.value[i] += value.value[i] + carry;
        carry = carry ? (sum.value[i] <= value.value[i]) : (sum.value[i] < value.value[i]);
    }

    // If we had a carry, cascade it up to the end
    for (int i = sizeValue / 64; i < sizeMod / 32; i++) {
        if (!carry) {
            break;
        }
        sum.value[i] += carry;
        carry = sum.value[i] == 0;
    }

    // The t value is sum divided by r. As we chose r to be a power of two, this is equivalent to a bit shift
    BigInteger<sizeMod> t = sum >> auxModExp;

    // If we are greater than the modulus, subtract the modulus. Additionally, if we carried, then we were greater
    // than the modulus, but won't catch it, so subtract if either is true
    if (t >= mod || carry) {
        return t - mod;
    }
    // Otherwise we are within range so just return t
    return t;
}

template<int sizeA, int sizeB>
void extendedEuclidean(const BigInteger<sizeA> &a, const BigInteger<sizeB> &b, BigInteger<sizeB> &x, BigInteger<sizeA> &y) {
    // Initialise variables used for the calculations. Note, we also copy a and b here to normalise the sizes of
    // each variable
    BigInteger<MAX(sizeA, sizeB)> quotient, remainder, _a = a, _b = b;
    BigInteger<MAX(sizeA, sizeB)> x0 = 1, x1, y0, y1 = 1;

    // This is an iterative version of the algorithm, but the length is unknown so we just loop until it is complete
    while (true) {
        // Calculate the quotient and remainder of a and b
        _a.modAndDivide(_b, quotient, remainder);
        // Update a to be the remainder as we know gcd(a, b) = gcd(b, a % b)
        _a = remainder;
        // Update our current values for the inverses x and y (i.e. such that a * x + b * y = gcd(a, b))
        x0 = x0 - (y0 * quotient);
        x1 = x1 - (y1 * quotient);

        // If a is 0, we can now return. The correct x and y values will be stored in y0 and y1 at this point.
        if (_a == 0) {
            x = y0;
            y = y1;
            return;
        }

        // Repeat the same process, but now with essentially gcd(b, a % b) (as we set a = a % b previously)
        _b.modAndDivide(_a, quotient, remainder);
        _b = remainder;
        y0 = y0 - (x0 * quotient);
        y1 = y1 - (x1 * quotient);

        // Now that we have essentially swapped the variables, we must instead check if b is 0
        if (_b == 0) {
            x = x0;
            y = x1;
            return;
        }
    }
}

template<int size>
void multiply(uint32 *a, uint32 *b, uint32 *r) {
    // Base case where we simply use in-built multiplication
    if (size == 1) {
        // Calculate the product of these two elements (we know each is < 2^32, so p fits within 64 bits)
        uint64 p = (uint64)a[0] * (uint64)b[0];
        // Set the values in place
        r[0] = ((uint32 *) &p)[0];
        r[1] = ((uint32 *) &p)[1];
        // Break out
        return;
    }

    // We know that the lower halves of each number are < 2^(size/2), so the product is < 2^size. Similarly,
    // we know that the upper halves are both >= 2^(size / 2), so the product is >= 2^size, and hence these
    // products do not interfere with each other and can simply be calculated in place.

    // Multiply the lower halves in place
    multiply<size / 2>(a, b, r);
    // Multiply the upper halves in place
    multiply<size / 2>(&a[size / 2], &b[size / 2], &r[size]);

    // The cross multiplication section, however, overlaps both of the other sections so can't be set directly.
    // To calculate this, we simply make a new temporary array to store the intermediary value and then add it on.

    // We need the two sums of the upper and lower halves of a and b, namely a0 + a1 and b1 + b0.
    uint32 *sa = (uint32 *) alloca(sizeof(uint32) * size / 2);
    uint32 *sb = (uint32 *) alloca(sizeof(uint32) * size / 2);

    // Copy the lower half of a into sa
    memcpy(sa, a, sizeof(uint32) * size / 2);
    // Copy the lower half of b into sb
    memcpy(sb, b, sizeof(uint32) * size / 2);

    bool carryA = false, carryB = false;

    for (int i = 0; i < size / 2; i++) {
        uint32 _a = a[i + size / 2] + carryA, _b = b[i + size / 2] + carryB;

        sa[i] += _a;
        sb[i] += _b;

        carryA = sa[i] < _a;
        carryB = sb[i] < _b;
    }

    uint32 *cross = (uint32 *) alloca(sizeof(uint32) * size);
    memset(cross, 0, sizeof(uint32) * size);
    multiply<size / 2>(sa, sb, cross);

    if (carryA) {
        carryA = false;

        for (int i = size / 2; i < size; i++) {
            uint32 _b = sb[i - size / 2] + carryA;
            cross[i] += _b;
            carryA = cross[i] < _b;
        }
    }

    if (carryB) {
        carryB = false;

        for (int i = size / 2; i < size; i++) {
            uint32 _a = sa[i - size / 2] + carryB;
            cross[i] += _a;
            carryB = cross[i] < _a;
        }
    }

    bool carry = true;

    for (int i = 0; i < size; i++) {
        uint32 _add = ~r[i] + carry;
        cross[i] += _add;
        carry = cross[i] < _add;
    }

    carry = true;

    for (int i = 0; i < size; i++) {
        uint32 _add = ~r[i + size] + carry;
        cross[i] += _add;
        carry = cross[i] < _add;
    }

    carry = false;

    for (int i = 0; i < size; i++) {
        uint32 _add = cross[i] + carry;
        r[i + size / 2] += _add;
        carry = r[i + size / 2] < _add;
    }

    for (int i = 3 * size / 2; (i < 2 * size) && carry; i++) {
        r[i]++;
        carry = r[i] == 0;
    }
}

template<int sizeBase, int sizeExp, int sizeMod>
BigInteger<sizeMod> modularExponent(
        const BigInteger<sizeBase> montgomeryBase,
        const BigInteger<sizeExp> exp,
        const BigInteger<sizeMod> mod,
        const BigInteger<sizeBase> inv,
        uint32 rExp,
        const BigInteger<sizeMod> rMask) {
    // A flag to determine whether or not we have found the most significant 1 yet. This improves the efficiency
    // of the algorithm
    bool startBitFound = false;

    // The start value of the result. We initialise it to be such that it is congruent to r to begin with, so
    BigInteger<sizeMod> result = ~mod & rMask;
    uint8 *resultRaw = (uint8 *) &result;
    resultRaw[0] |= 1;

    // First, we loop through each bit in the modulus in reverse order
    for (int i = (sizeMod / 64) - 1; i >= 0; i--) {
        // If the whole uint64 is 0 and we haven't found the first 1 yet, we can just skip it.
        if (exp.value[i] || startBitFound) {
            for (int j = 63; j >= 0; j--) {
                // checkBit is set to whatever the value in this bit is
                bool checkBit = (exp.value[i] >> j) & 1u;
                // If the start bit was already found, or if this bit was 1, then we know the start bit has been found
                startBitFound |= checkBit;

                // (For efficiency) if we have the most significant bit, we need to perform the squaring and if
                // necessary multiplying.
                if (startBitFound) {
                    // Square the result
                    result = redc(rMask, rExp, mod, inv, result * result);

                    // If the bit was set, additionally multiply the result by the base
                    if (checkBit) {
                        result = redc(rMask, rExp, mod, inv, result * montgomeryBase);
                    }
                }
            }
        }
    }

    // Finally apply the redc algorithm one more time to the value. This has the effect of multiplying again by
    // the multiplicative inverse of r, so we end up with the true value (not in Montgomery form)
    return redc(rMask, rExp, mod, inv, result);
}

template<int sizeBase, int sizeMod>
BigInteger<sizeMod> modularExponent(
        const BigInteger<sizeBase> montgomeryBase,
        const uint64 exp,
        const BigInteger<sizeMod> mod,
        const BigInteger<sizeBase> inv,
        uint32 rExp,
        const BigInteger<sizeMod> rMask) {
    // A flag to determine whether or not we have found the most significant 1 yet. This improves the efficiency
    // of the algorithm
    bool startBitFound = false;

    // The start value of the result. We initialise it to be such that it is congruent to r to begin with, so
    BigInteger<sizeMod> result = ~mod & rMask;
    uint8 *resultRaw = (uint8 *) &result;
    resultRaw[0] |= 1;

    for (int j = 63; j >= 0; j--) {
        // checkBit is set to whatever the value in this bit is
        bool checkBit = (exp >> j) & 1u;
        // If the start bit was already found, or if this bit was 1, then we know the start bit has been found
        startBitFound |= checkBit;

        // (For efficiency) if we have the most significant bit, we need to perform the squaring and if
        // necessary multiplying.
        if (startBitFound) {
            // Square the result
            result = redc(rMask, rExp, mod, inv, result * result);

            // If the bit was set, additionally multiply the result by the base
            if (checkBit) {
                result = redc(rMask, rExp, mod, inv, result * montgomeryBase);
            }
        }
    }

    // Finally apply the redc algorithm one more time to the value. This has the effect of multiplying again by
    // the multiplicative inverse of r, so we end up with the true value (not in Montgomery form)
    return redc(rMask, rExp, mod, inv, result);
}

template<int size>
BigInteger<size> getAuxiliaryModulusMask(uint32 modExponent) {
    // Now we can construct a mask for taking the modulus under r, which is equal to just taking the last (rExp - 1)
    // bits of a number.
    BigInteger<size> rMask;

    uint64 *raw = (uint64 *) &rMask;

    // Get the number of uint64s which are all 1s
    uint32 fullMasks = modExponent / 64;
    // Get the number of bits in the most significant uint64 that should be 1s
    uint8 maskRemainder = modExponent % 64;

    // Loop through each low uint64
    for (int i = 0; i < fullMasks; i++) {
        // Set the value at each uint64 lower than rExp to all 1s
        raw[i] = -1UL;
    }

    // If we have a remainder to write, set the most significant uint64 to -1 shifted by 64 - the number of bits we need
    // which will leave the correct number of bits as 1, whilst setting all the others to 0.
    if (maskRemainder != 0) {
        raw[fullMasks] = (-1UL) >> (64 - maskRemainder);
    }

    return rMask;
}

template<int sizeMod>
BigInteger<sizeMod> modularInverse(BigInteger<sizeMod> mod, uint32 auxModExp) {
    BigInteger<sizeMod> modPrime, l, rSubMod = (~mod) & (getAuxiliaryModulusMask<sizeMod>(auxModExp));
    uint8 *rSubModRaw = (uint8 *) &rSubMod;
    rSubModRaw[0] |= 1;
    extendedEuclidean(mod, rSubMod, modPrime, l);

    modPrime = l - modPrime;

    return modPrime;
}

template<int size>
template<int sizeOther>
BigInteger<MAX(size, sizeOther)> BigInteger<size>::operator+(BigInteger<sizeOther> other) const {
    // Initialise the result integer as the larger (in terms of bit length) of the two integers
    BigInteger<MAX(size, sizeOther)> result;
    if (size > sizeOther) {
        result = *this;
    } else {
        result = other;
    }

    // Hold at each stage a carry flag to say whether the last summation overflowed
    bool carryFlag = false;

    // Loop i over the length of the shorter number
    for (int i = 0; i < (MIN(size, sizeOther) / 64); i++) {
        // At each stage, add the shorter number's value at this point to the current result, along with the
        // carry flag (which will be "1" if it was set to true on the previous iteration)
        if (size > sizeOther) {
            result.value[i] += other.value[i] + carryFlag;
        } else {
            result.value[i] += value[i] + carryFlag;
        }
        // If the result is less than either of the input values after adding, we overflowed. So the carry flag
        // should always be true in this event. If the carry flag was true, then there is also the case where we
        // had v - 1 + 1 = v, which would still have been an overflow, but we would not capture it because of the
        // strict inequality, so instead we use a less than or equal if the carry was true.
        carryFlag = carryFlag ? (result.value[i] <= value[i]) : (result.value[i] < value[i]);
    }

    // Loop over the remaining uint64's in the larger number
    for (int i = MIN(size, sizeOther) / 64; i < (MAX(size, sizeOther) / 64); i++) {
        // As soon as the carry flag is false, we can break because we know that no higher value
        // uint64's will have to increase any more.
        if (!carryFlag) {
            break;
        }
        // If we do have something to carry, add one
        result.value[i] += 1u;
        // As we only added one, the only way to have overflown is if the previous value was all 1s, meaning now we
        // have exactly 0 in this slot.
        carryFlag = result.value[i] == 0;
    }

    return result;
}

template<int size>
BigInteger<size> BigInteger<size>::operator-() const {
    // Initialise the result as all zeros
    BigInteger<size> result;

    // Set the carry flag to be true by default. This has the effect of adding 1 to the result
    // which is required for two's complement subtractions.
    bool carry = true;

    // Iterate through each uint64
    for (int i = 0; i < (size / 64); i++) {
        // Set the value to the bitwise inverse of the input, and add the carry.
        result.value[i] = ~value[i] + carry;
        // If the result at this point is now 0, this means we overflowed, hence set the carry to true again.
        carry = result.value[i] == 0 && carry;
    }

    return result;
}

template<int size>
template<int sizeOther>
BigInteger<MAX(size, sizeOther)> BigInteger<size>::operator-(BigInteger<sizeOther> other) const {
    // Define subtraction as addition with the additive inverse
    if (size > sizeOther) {
        // If the other has a smaller size, the high bits need to be all 1's not all 0's
        return *this + (-BigInteger<size>(other));
    }
    return *this + (-other);
}

template<int size>
template<int sizeOther>
BigInteger<MAX(size, sizeOther) * 2> BigInteger<size>::operator*(BigInteger<sizeOther> other) const {

    // TODO: Fix Karatsuba implementation
//    BigInteger<MAX(size, sizeOther) * 2> _r;
//
//    if (size == sizeOther) {
//        multiply<size / 32>((uint32 *) value, (uint32 *) other.value, (uint32 *) _r.value);
//
//        return _r;
//    }

    // We want to keep all BigIntegers as power of two lengths, so we cannot simply add
    // size to sizeOther. Thus, we take 2 times the largest of them.
    BigInteger<MAX(size, sizeOther) * 2> result;
    // For writing the values from the products in, we must now cast the result value array to uint32.
    uint32 *r = (uint32 *) result.value;

    // Trivial case where one of the inputs is 0
    if (*this == 0 || other == 0) {
        return result;
    }

    // First, view the data as an array of uint32's rather than uint64's. This is so we can use standard
    // multiplication of uint64's without overflowing
    uint32 *aVal = (uint32 *) value;
    uint32 *bVal = (uint32 *) other.value;

    uint64 carry;
    uint32 *bEnd = bVal + (sizeOther / 32);

    // We first loop through each uint32 in the first number
    for (int i = 0; i < (size / 32); i++) {
        // We get this value and cast it into a uint64, so full multiplication can occur.
        // We do this before the internal loop so we can minimise memory lookups
        uint64 _a = aVal[i];

        carry = 0;
        uint32 *_b = bVal;
        uint32 *_r = r + i;

        while (_b < bEnd) {
            carry += *_r + (_a * *_b++);
            *_r++ = carry;
            carry >>= 32u;
        }

        if (carry) {
            r[i + (sizeOther / 32)] += carry;
        }
    }

    return result;
}

template<int size>
template<int sizeDivisor>
BigInteger<size> BigInteger<size>::operator/(BigInteger<sizeDivisor> divisor) const {
    // Initialise variables for the quotient and remainder
    BigInteger<size> quotient;
    BigInteger<sizeDivisor> remainder;

    // Call the mod and divide function to calculate both
    modAndDivide(divisor, quotient, remainder);

    // Return just the quotient
    return quotient;
}

template<int size>
template<int sizeMod>
BigInteger<sizeMod> BigInteger<size>::operator%(BigInteger<sizeMod> mod) const {
    // Initialise variables for the quotient and remainder
    BigInteger<size> quotient;
    BigInteger<sizeMod> remainder;

    // Call the mod and divide function to calculate both
    modAndDivide(mod, quotient, remainder);

    // Return just the remainder
    return remainder;
}

template<int size>
template<int sizeDivisor>
void BigInteger<size>::modAndDivide(BigInteger<sizeDivisor> divisor, BigInteger<size> &quotient,
                                    BigInteger<sizeDivisor> &remainder) const {
    // Trivial case where dividend < divisor, q = 0, r = dividend
    if (*this <= divisor) {
        quotient = BigInteger<size>();
        remainder = BigInteger<sizeDivisor>(*this);
        return;
    }

    // The base of each digit, 2 ^ 32.
    uint64 b = 0x0000000100000000L;

    // The sizes of the dividend and divisor (in terms of digits base b) respectively
    int m, n;

    // Loop through each uint64 in the dividend
    for (int i = (size / 64) - 1; i >= 0; i--) {
        // If this value is non zero, the most significant bit is here
        if (value[i]) {
            // If shifting to the right is still non zero, the most significant bit is in the upper 4 bytes,
            // otherwise it is in the lower 4 bytes. We then set m accordingly
            if (value[i] >> 32) {
                m = 2 * i + 2;
            } else {
                m = 2 * i + 1;
            }
            // We have found the MSB, so break out
            break;
        }
    }

    // Loop through each uint64 in the divisor
    for (int i = (sizeDivisor / 64) - 1; i >= 0; i--) {
        // If this value is none zero, the most significant bit is here
        if (divisor.value[i]) {
            // If shifting to the right is still non zero, the most significant bit is in the upper 4 bytes,
            // otherwise it is in the lower 4 bytes. We then set n accordingly
            if (divisor.value[i] >> 32) {
                n = 2 * i + 2;
            } else {
                n = 2 * i + 1;
            }
            // We have found the MSB, so break out
            break;
        }
    }

    // We will call the dividend "v" and the divisor "u" in this algorithm. We set the pointers to view them both
    // as digits of the base b.
    uint32 *u = (uint32 *) value;
    uint32 *v = (uint32 *) divisor.value;

    uint32 *q = (uint32 *) quotient.value;
    uint32 *r = (uint32 *) remainder.value;

    // Set the quotient and remainder to all 0s by default (this was causing errors when reusing values)
    memset(q, 0, size / 8);
    memset(r, 0, sizeDivisor / 8);

    // In the case when n is 1 (the divisor has only one digit) run a slightly modified version of the algorithm
    // The original algorithm only works in the case that n >= 2
    if (n == 1) {
        long long k = 0;
        for (int j = m - 1; j >= 0; j--) {
            q[j] = (k * b + u[j]) / v[0];
            k = (k * b + u[j]) - q[j] * v[0];
        }
        r[0] = k;
        return;
    }

    // We know this should be true because m < n => dividend < divisor, and so we would have returned the trivial
    // case above
//    assert(m >= n);

    // We allocate a separate array of uint32's for the normalised versions of u and v. Note that un has an extra
    // digit to prevent loss of information from overflow
    uint32 *un = (uint32 *) alloca(sizeof(uint32) * (m + 1));
    uint32 *vn = (uint32 *) alloca(sizeof(uint32) * n);

    // Calculate s such that D = 2^(32 - s), where D is such that b / 2 <= v[n - 1] * D < b. Hence, if we
    // calculate s as the number of leading zeros in v[n - 1], we know that left shifting by s gives a value
    // with the first bit set, and hence v[n - 1] << s >= b / 2, and is < b.
    uint32 s = __builtin_clz(v[n - 1]);

    // Normalise the two inputs by multiplying them by D (equivalent to left shifting by s)
    un[m] = (uint64) u[m - 1] >> (32 - s);
    for (int i = m - 1; i > 0; i--) {
        un[i] = u[i] << s | ((uint64) u[i - 1] >> (32 - s));
    }
    un[0] = u[0] << s;

    // We know that vn won't overflow due to how we picked s (D)
    for (int i = n - 1; i > 0; i--) {
        vn[i] = v[i] << s | ((uint64) v[i - 1] >> (32 - s));
    }
    vn[0] = v[0] << s;

    for (int j = m - n; j >= 0; j--) {
        // Calculate the estimates for the quotient and remainder at this pass
        uint64 qPrime = (un[n + j] * b + un[n + j - 1]) / vn[n - 1];
        uint64 rPrime = (un[n + j] * b + un[n + j - 1]) % vn[n - 1];

        // Adjust them
        while (qPrime >= b || (uint32) qPrime * (uint64) vn[n - 2] > b * rPrime + un[j + n - 2]) {
            qPrime -= 1;
            rPrime += vn[n - 1];
            if (rPrime >= b) {
                break;
            }
        }

        long long k = 0, t;

        for (int i = 0; i < n; i++) {
            uint64 product = (uint32) qPrime * (uint64) vn[i];

            t = un[i + j] - k - (product & 0xFFFFFFFFL);
            un[i + j] = t;
            k = (product >> 32) - (t >> 32);
        }

        t = un[j + n] - k;
        un[j + n] = t;

        q[j] = qPrime;

        if (t < 0) {
            q[j] -= 1;
            k = 0;
            for (int i = 0; i < n; i++) {
                t = (uint64) un[i + j] + vn[i] + k;
                un[i + j] = t;
                k = t >> 32;
            }
            un[j + n] += k;
        }
    }

    // Un-normalise the remainder
    for (int i = 0; i < n - 1; i++) {
        r[i] = (un[i] >> s) | ((uint64) un[i + 1] << (32 - s));
    }
    r[n - 1] = un[n - 1] >> s;
}


template<int size>
BigInteger<size> BigInteger<size>::operator<<(uint32 shift) const {
    // Initialise an all 0 resulting BigInteger
    BigInteger<size> result;

    // Calculate the number of full uint64 shifts
    uint32 fullShifts = shift / 64;
    // Calculate the remaining number of bits needing shifting
    uint8 rem = shift % 64;

    // Initialise the carry to 0
    uint64 carry = 0;

    // Loop over each uint64
    for (int i = fullShifts; i < (size / 64); i++) {
        // Set the value to the original uint64 shifted by the number of full shifts, then shifted additionally
        // by the remaining number of shifts. This will delete some bits that we need to keep, which we then save
        // in the carry value, and add to the next iteration (this handles shifting between adjacent uint64s)
        result.value[i] = (value[i - fullShifts] << rem) + (rem ? carry : 0);
        carry = value[i - fullShifts] >> (64 - rem);
    }

    return result;
}

template<int size>
BigInteger<size> BigInteger<size>::operator>>(uint32 shift) const {
    // Initialise an all 0 resulting BigInteger
    BigInteger<size> result;

    // Calculate the number of full uint64 shifts
    uint32 fullShifts = shift / 64;
    // Calculate the remaining number of bits needing shifting
    uint8 rem = shift % 64;

    // Initialise the carry to 0
    uint64 carry = 0;

    // Loop over each uint64 (in reverse order)
    for (int i = (size / 64) - fullShifts - 1; i >= 0; i--) {
        // Set the value to the original uint64 shifted by the number of full shifts, then shifted additionally
        // by the remaining number of shifts. This will delete some bits that we need to keep, which we then save
        // in the carry value, and add to the next iteration (this handles shifting between adjacent uint64s)
        result.value[i] = (value[i + fullShifts] >> rem) + (rem ? carry : 0);
        carry = value[i + fullShifts] << (64 - rem);
    }

    return result;
}

template<int size>
void BigInteger<size>::operator<<=(uint32 shift) {
    // Calculate the number of full uint64 shifts
    uint32 fullShifts = shift / 64;
    // Calculate the remaining number of bits needing shifting
    uint8 rem = shift % 64;

    // Initialise the carry to 0 and declare a carryNew variable
    uint64 carry = 0, carryNew;

    // Loop over each uint64
    for (int i = fullShifts; i < (size / 64); i++) {
        // Calculate the carryNew before writing, as if fullShifts=0, we will be overwriting the same
        // uint64 we are reading.
        carryNew = value[i - fullShifts] >> (64 - rem);
        // Overwrite this value using the same algorithm as before
        value[i] = (value[i - fullShifts] << rem) + (rem ? carry : 0);
        // Update the carry to the new one
        carry = carryNew;
    }

    // Set the full unit64's that we skipped over to 0
    for (int i = 0; i < fullShifts; i++) {
        value[i] = 0;
    }
}

template<int size>
void BigInteger<size>::operator>>=(uint32 shift) {
    // Calculate the number of full uint64 shifts
    uint32 fullShifts = shift / 64;
    // Calculate the remaining number of bits needing shifting
    uint8 rem = shift % 64;

    // Initialise the carry to 0 and declare a carryNew variable
    uint64 carry = 0, carryNew;

    // Loop over each uint64 (in reverse order)
    for (int i = (size / 64) - fullShifts - 1; i >= 0; i--) {
        // Calculate the carryNew before writing, as if fullShifts=0, we will be overwriting the same
        // uint64 we are reading.
        carryNew = value[i + fullShifts] << (64 - rem);
        // Overwrite this value using the same algorithm as before
        value[i] = (value[i + fullShifts] >> rem) + (rem ? carry : 0);
        // Update the carry to the new one
        carry = carryNew;
    }

    // Set the full unit64's that we skipped over to 0
    for (int i = (size / 64) - fullShifts; i < (size / 64); i++) {
        value[i] = 0;
    }
}

template<int size>
template<int sizeOther>
BigInteger<MIN(size, sizeOther)> BigInteger<size>::operator&(BigInteger<sizeOther> other) const {
    // Initialise the result as all 0s. We know that if one BigInteger has more uint64's than the other,
    // then these higher bits will all be 0
    BigInteger<MIN(size, sizeOther)> result;

    // Loop through each shared uint64
    for (int i = 0; i < (MIN(size, sizeOther) / 64); i++) {
        // Set the value to the local bitwise and. This operator has no complexities such as carrying; it
        // only applies between two bits locally, so the process is very simple.
        result.value[i] = value[i] & other.value[i];
    }

    return result;
}

template<int size>
template<int sizeOther>
BigInteger<MAX(size, sizeOther)> BigInteger<size>::operator|(BigInteger<sizeOther> other) const {
    // Initialise the result as the larger of the two inputs. We know that the excess uint64's will
    // all be unchanged from the original larger number
    BigInteger<MAX(size, sizeOther)> result = (size > sizeOther) ? *this : other;

    // Loop through each shared uint64
    for (int i = 0; i < (MIN(size, sizeOther) / 64); i++) {
        // Set the value to the local bitwise or. This operator has no complexities such as carrying; it
        // only applies between two bits locally, so the process is very simple.
        result.value[i] = value[i] | other.value[i];
    }

    return result;
}

template<int size>
BigInteger<size> BigInteger<size>::operator~() const {
    // Initialise the result BigInteger; we do not care about the values as we will overwrite all of them
    BigInteger<size> result;

    // Loop through each uint64
    for (int i = 0; i < (size / 64); i++) {
        // Set the value to the local bitwise not. Again, this operator only cares about two bits at a time, hence
        // the simplicity
        result.value[i] = ~value[i];
    }

    return result;
}

template<int size>
template<int sizeOther>
bool BigInteger<size>::operator==(BigInteger<sizeOther> other) const {
    // First loop over the shared uint64's that we know that both instances have
    for (int i = 0; i < (MIN(size, sizeOther) / 64); i++) {
        // If any pair is not equal, the overall numbers must be different.
        if (value[i] != other.value[i]) {
            return false;
        }
    }

    // Secondly, if one number has a larger size, loop through the extra uint64's that the other number does not
    // have
    for (int i = MIN(size, sizeOther) / 64; i < (MAX(size, sizeOther) / 64); i++) {
        // If any of these have a value that isn't 0, we know that these numbers are not equal
        if ((size > sizeOther) ? value[i] : other.value[i]) {
            return false;
        }
    }

    // If we didn't find any inequality, the numbers must be equal
    return true;
}

template<int size>
bool BigInteger<size>::operator==(uint64 other) const {
    if (value[0] != other) {
        return false;
    }

    for (int i = 1; i < size / 64; i++) {
        if (value[i]) {
            return false;
        }
    }

    return true;
}

template<int size>
template<int sizeOther>
bool BigInteger<size>::operator!=(BigInteger<sizeOther> other) const {
    // First loop over the shared uint64's that we know that both instances have
    for (int i = 0; i < (MIN(size, sizeOther) / 64); i++) {
        // If any pair is not equal, the overall numbers must be different.
        if (value[i] != other.value[i]) {
            return true;
        }
    }

    // Secondly, if one number has a larger size, loop through the extra uint64's that the other number does not
    // have
    for (int i = MIN(size, sizeOther) / 64; i < (MAX(size, sizeOther) / 64); i++) {
        // If any of these have a value that isn't 0, we know that these numbers are not equal
        if ((size > sizeOther) ? value[i] : other.value[i]) {
            return true;
        }
    }

    // If we didn't find any inequality, the numbers must be equal
    return false;
}

template<int size>
bool BigInteger<size>::operator!=(uint64 other) const {
    if (value[0] != other) {
        return true;
    }

    for (int i = 1; i < size / 64; i++) {
        if (value[i]) {
            return true;
        }
    }

    return false;
}

template<int size>
template<int sizeOther>
bool BigInteger<size>::operator>(BigInteger<sizeOther> other) const {
    // First loop over the excess uint64's held by the larger of the two numbers
    for (int i = MAX(size, sizeOther) / 64 - 1; i >= (MIN(size, sizeOther) / 64); i--) {
        // If any of these are non zero, then return true if the larger number was this, and false if it was
        // the other (as we are checking this > other)
        if (size > sizeOther ? value[i] : other.value[i]) {
            return size > sizeOther;
        }
    }

    // For all the remaining uint64's, check the values individually. If they are different at any point, we know
    // which is greater, as we check the uint64's in reverse order, so the most significant ones are checked first.
    for (int i = MIN(size, sizeOther) / 64 - 1; i >= 0; i--) {
        if (value[i] > other.value[i]) {
            return true;
        } else if (value[i] < other.value[i]) {
            return false;
        }
    }

    // If we fall through to this point, the numbers are equal and so the inequality is false.
    return false;
}

template<int size>
template<int sizeOther>
bool BigInteger<size>::operator<(BigInteger<sizeOther> other) const {
    // Define a < b as !(a >= b)
    return !(*this >= other);
}

template<int size>
template<int sizeOther>
bool BigInteger<size>::operator>=(BigInteger<sizeOther> other) const {
    // First loop over the excess uint64's held by the larger of the two numbers
    for (int i = MAX(size, sizeOther) / 64 - 1; i >= (MIN(size, sizeOther) / 64); i--) {
        // If any of these are non zero, then return true if the larger number was this, and false if it was
        // the other (as we are checking this > other)
        if (size > sizeOther ? value[i] : other.value[i]) {
            return size > sizeOther;
        }
    }

    // For all the remaining uint64's, check the values individually. If they are different at any point, we know
    // which is greater, as we check the uint64's in reverse order, so the most significant ones are checked first.
    for (int i = MIN(size, sizeOther) / 64 - 1; i >= 0; i--) {
        if (value[i] > other.value[i]) {
            return true;
        } else if (value[i] < other.value[i]) {
            return false;
        }
    }

    // If we fall through to this point, the numbers are equal and so the inequality is true.
    return true;
}

template<int size>
template<int sizeOther>
bool BigInteger<size>::operator<=(BigInteger<sizeOther> other) const {
    // Define a <= b as !(a > b)
    return !(*this > other);
}

template<int size>
template<int sizeExponent, int sizeMod>
BigInteger<sizeMod> BigInteger<size>::exp(BigInteger<sizeExponent> exp, BigInteger<sizeMod> mod) const {

    // Assert that the modulus value is odd. This is so the auxiliary modulus as a power of 2 works.
    // TODO: Deal with the case where 2 | mod
//    assert(mod.value[0] & 1);

    // First, we need to create an auxiliary modulus r, such that gcd(mod, r)=1 and r > mod. We will choose
    // r to be the smallest power of two greater than mod, as we are assuming that mod is an odd prime.
    // As r is simply a power of 2, we will first just find the exponent.
    uint32 rExp = sizeMod - mod.countLeadingZeros();

    BigInteger<sizeMod> rMask = getAuxiliaryModulusMask<sizeMod>(rExp);

    // Next, we need to find the base's Montgomery form representative. This is defined as b' = rb (mod n).
    // Here, because the modulus is of arbitrary form, we have to use the slow standard modulus operation. After we
    // have the number in Montgomery form, however, we can perform quick modular multiplication using the
    // REDC algorithm.
    // To calculate the dividend we simple have to multiply by r, which is the same as bit shifting left by
    // rExp. We chose r specifically to make this operation low cost. We also know that shifting left by r
    // gives a number of bit length at most 2 * MAX(size, sizeMod).

    // First, we set rb = value. This casts it into a larger size.
    BigInteger<MAX(size, sizeMod) * 2> rBase = *this;
    // Next we multiply by r, which is equivalent to left shifting by rExp
    // <<= UNSTABLE
//    rBase <<= rExp;
    rBase = rBase << rExp;

    // Finally to get the Montgomery form, we just take this under the modulus. This has to be done using the standard
    // (slow) modulus function, but we only have to do this once per exponentiation
    BigInteger<sizeMod> montgomeryBase = rBase % mod;

    // Next we need the the value modPrime such that r*r^-1 - mod * modPrime = 1. To do this, we use
    // the extended Euclidean algorithm. To avoid calculating r (as it might be an annoying size, i.e. a power
    // of a power of two, meaning it requires 2 * sizeMod space) we instead notice that we can calculate n' a
    // different way.
    // We know rr' + nn' = 1, as gcd(r, n) = 1.
    // Next, we let m~ be such that mm~ = 1 (mod (r - m)) <- r - n is in the range of a BigInteger<sizeMod>.
    // Then we see that mm~ = 1 + k(r - m), and it follows that -kr + m(-k - m~) = 1. Let l = -k, lr + m(l - m~) = 1
    // Now we see that l - m~ is just m', and we calculate m~ and l using the extended Euclidean function with m
    // and r - n.
    BigInteger<sizeMod> modPrime = modularInverse(mod, rExp);

    return modularExponent(montgomeryBase, exp, mod, modPrime, rExp, rMask);
}

template<int size>
template<int sizeMod>
BigInteger<sizeMod> BigInteger<size>::exp(uint64 exp, BigInteger<sizeMod> mod) const {
    // First, we need to create an auxiliary modulus r, such that gcd(mod, r)=1 and r > mod. We will choose
    // r to be the smallest power of two greater than mod, as we are assuming that mod is an odd prime.
    // As r is simply a power of 2, we will first just find the exponent.
    uint32 rExp = sizeMod - mod.countLeadingZeros();

    BigInteger<sizeMod> rMask = getAuxiliaryModulusMask<sizeMod>(rExp);

    // Next, we need to find the base's Montgomery form representative. This is defined as b' = rb (mod n).
    // Here, because the modulus is of arbitrary form, we have to use the slow standard modulus operation. After we
    // have the number in Montgomery form, however, we can perform quick modular multiplication using the
    // REDC algorithm.
    // To calculate the dividend we simple have to multiply by r, which is the same as bit shifting left by
    // rExp. We chose r specifically to make this operation low cost. We also know that shifting left by r
    // gives a number of bit length at most 2 * MAX(size, sizeMod).

    // First, we set rb = value. This casts it into a larger size.
    BigInteger<MAX(size, sizeMod) * 2> rBase = *this;
    // Next we multiply by r, which is equivalent to left shifting by rExp
    rBase = rBase << rExp;

    // Finally to get the Montgomery form, we just take this under the modulus. This has to be done using the standard
    // (slow) modulus function, but we only have to do this once per exponentiation
    BigInteger<sizeMod> montgomeryBase = rBase % mod;

    // Next we need the the value modPrime such that r*r^-1 - mod * modPrime = 1. To do this, we use
    // the extended Euclidean algorithm. To avoid calculating r (as it might be an annoying size, i.e. a power
    // of a power of two, meaning it requires 2 * sizeMod space) we instead notice that we can calculate n' a
    // different way.
    // We know rr' + nn' = 1, as gcd(r, n) = 1.
    // Next, we let m~ be such that mm~ = 1 (mod (r - m)) <- r - n is in the range of a BigInteger<sizeMod>.
    // Then we see that mm~ = 1 + k(r - m), and it follows that -kr + m(-k - m~) = 1. Let l = -k, lr + m(l - m~) = 1
    // Now we see that l - m~ is just m', and we calculate m~ and l using the extended Euclidean function with m
    // and r - n.
    BigInteger<sizeMod> modPrime = modularInverse(mod, rExp);

    return modularExponent(montgomeryBase, exp, mod, modPrime, rExp, rMask);
}

template<int size>
uint32 BigInteger<size>::countLeadingZeros() const {
    uint32 lZeros = 0;
    // We must find the most significant 1, so we start by looping through the uint64's
    // in reverse order.
    for (int i = (size / 64) - 1; i >= 0; i--) {
        // As soon as we find a value which is non zero, we know the most significant 1 is in this uint64
        if (value[i]) {
            // Get the number of leading zeros in this uint64. This builtin function should be optimised by gcc
            uint8 leadingZeros = __builtin_clzl(value[i]);
            lZeros += leadingZeros;
            break;
        }
        lZeros += 64;
    }
    return lZeros;
}

template<int size>
BigInteger<size>::BigInteger() = default;

template<int size>
BigInteger<size>::BigInteger(const uint64 &val) {
    // This value can fit entirely in the least significant uint64, so we just copy it there
    // As we are constructing here, we know that the values are all 0 because that is the default
    value[0] = val;
}

template<int size>
template<int sizeNew>
BigInteger<size>::operator BigInteger<sizeNew>() {
    // If we cast to a new size, just return the constructor for the new size with this as an input
    return BigInteger<sizeNew>(*this);
}

template<int size>
template<int sizeOther>
BigInteger<size>::BigInteger(const BigInteger<sizeOther> &val) {
    // We copy each uint64 from the input value into our values
    for (int i = 0; i < (MIN(size, sizeOther) / 64); i++) {
        value[i] = val.value[i];
    }
}

#endif //ENCRYPT_BIGINTEGER_H
