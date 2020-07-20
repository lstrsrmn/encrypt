//
// Created by matthew on 14/05/2020.
//

#include "../include/safeRandom.h"

CryptoSafeRandom* CryptoSafeRandom::_instance = nullptr;

#ifdef _WIN32

void CryptoSafeRandom::random(void *targetBuffer, size_t readSize) {
    CryptoSafeRandom *instance = getInstance();

    CryptGenRandom(instance->handle, readSize, (BYTE *) targetBuffer);
}

CryptoSafeRandom::~CryptoSafeRandom() {
    if (handle) {
        CryptReleaseContext(handle, 0);
        handle = 0;
    }
}

CryptoSafeRandom::CryptoSafeRandom() {
    if (!CryptAcquireContextA(&handle, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT | CRYPT_SILENT)) {
        handle = 0;
    }
}

CryptoSafeRandom* CryptoSafeRandom::getInstance() {
    if (_instance == nullptr) {
        _instance = new CryptoSafeRandom();
    }
    return _instance;
}

#else

void CryptoSafeRandom::random(void *targetBuffer, size_t readSize) {
    CryptoSafeRandom *instance = getInstance();

    read(instance->urandomFd, targetBuffer, readSize);
}

CryptoSafeRandom::~CryptoSafeRandom() {
    if (urandomFd) {
        close(urandomFd);
    }
}

CryptoSafeRandom::CryptoSafeRandom() {
    urandomFd = open("/dev/urandom", O_RDONLY);
}

CryptoSafeRandom *CryptoSafeRandom::getInstance() {
    if (_instance == nullptr) {
        _instance = new CryptoSafeRandom();
    }
    return _instance;
}

#endif