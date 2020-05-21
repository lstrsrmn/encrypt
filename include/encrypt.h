//
// Created by matthew on 13/05/2020.
//

#ifndef ENCRYPT_ENCRYPT_H
#define ENCRYPT_ENCRYPT_H

#include "keyGenerator.h"

uint2048 encrypt(uint2048 message, PublicKey key);

uint2048 decrypt(uint2048 cipher, PrivateKey key);

uint128 encryptBlock(uint128 message, AESKey key);

uint128 decryptBlock(uint128 cipher, AESKey key);

#endif //ENCRYPT_ENCRYPT_H
