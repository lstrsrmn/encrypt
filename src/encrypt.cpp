//
// Created by matthew on 13/05/2020.
//

#include "../include/encrypt.h"

uint2048 encrypt(uint2048 message, PublicKey key) {
    return message.exp(key.e, key.n);
}

uint2048 decrypt(uint2048 cipher, PrivateKey key) {
    return cipher.exp(key.d, key.n);
}

uint128 encryptBlock(uint128 message, AESKey key) {
    return 0;
}

uint128 decryptBlock(uint128 cipher, AESKey key) {
    return 0;
}