//
// Created by matthew on 19/05/2020.
//

#include <iostream>

#include "../include/keyGenerator.h"
#include <chrono>

int main() {
    std::chrono::system_clock::time_point start, end;

    start = std::chrono::system_clock::now();

    uint1024 p = generatePrime<1024>();

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Time: " << elapsed.count() << std::endl;
    TEST_printHex(p);

    return 0;
}