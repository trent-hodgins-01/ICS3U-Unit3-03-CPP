// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/20/21
// This is a guessing game program
// The user enters in a number between 1 and 100

#include <iostream>

#include <random>

int main() {
    // this function checks to see if the user guessed the correct number
    int someRandomNumber;
    float guessed_number;

    // making the someRandomNumber variable a random number
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersenne_twister
    std::uniform_int_distribution<int> idist(0,100);
    // [0, 100]
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Guess a number between 0 and 100 (integer): ";
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // process and output
    if (guessed_number == someRandomNumber) {
        std::cout << "You Guessed Correctly!" << std::endl;
    } else {
        std::cout << "You Guessed Wrong! Correct answer was "<< someRandomNumber << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
