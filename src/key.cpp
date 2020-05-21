//
// Created by matthew on 21/05/2020.
//

#include "../include/key.h"

PublicKey::PublicKey(uint2048 n, uint32 e) {
    this->n = n;
    this->e = e;
}

PrivateKey::PrivateKey(uint2048 n, uint2048 d) {
    this->n = n;
    this->d = d;
}