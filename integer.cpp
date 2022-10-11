// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 11, 2022
// This program asks for an integer
// and tells you if the integer is
// positive, negative, or zero

#include <iostream>

int main() {
    // Declaring variables
    int userNum;

    // Input
    std::cout << "This program asks for an integer\n";
    std::cout << "and tells you if the integer is\n";
    std::cout << "positive, negative, or zero\n";
    std::cout << "\n";
    std::cout << "Enter any integer: ";
    std::cin >> userNum;

    // Process
    if (userNum < 0) {
        // output
        std::cout << "Your number is negative.";
    } else if (userNum > 0) {
        std::cout << "Your number is positive.";
    } else {
        std::cout << "Your number is zero.";
    }
}
