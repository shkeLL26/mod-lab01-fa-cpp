// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

int main() {
    const char* testStr = "Hello, world!";
    std::cout << testStr << "\n";
    std::cout << faStr1(testStr) << "\n";
    std::cout << faStr2(testStr) << "\n";
    std::cout << faStr3(testStr);
    return 0;
}
