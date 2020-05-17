//
// Created by matthew on 14/05/2020.
//

#include "../include/safeRandom.h"

CryptoSafeRandom *CryptoSafeRandom::_instance = nullptr;

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

