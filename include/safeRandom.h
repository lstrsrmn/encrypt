//
// Created by matthew on 14/05/2020.
//

#ifndef ENCRYPT_SAFERANDOM_H
#define ENCRYPT_SAFERANDOM_H

#ifdef _WIN32

// Windows safe random number generator

// #define _WINSOCKAPI_

#include <Windows.h>
#include <wincrypt.h>

class CryptoSafeRandom {
public:
    static void random(void* targetBuffer, size_t readSize);

    ~CryptoSafeRandom();

private:
    HCRYPTPROV handle;

    static CryptoSafeRandom* _instance;

    CryptoSafeRandom();

    static CryptoSafeRandom* getInstance();
};

#else

// Linux safe random number generator

#include <fcntl.h>
#include <unistd.h>

class CryptoSafeRandom {
public:
    static void random(void *targetBuffer, size_t readSize);

    ~CryptoSafeRandom();

private:
    int urandomFd;

    static CryptoSafeRandom *_instance;

    CryptoSafeRandom();

    static CryptoSafeRandom *getInstance();
};

#endif

#endif //ENCRYPT_SAFERANDOM_H
