// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 6, 2022
// This program asks for a number
// between 1 and 9, and then tells
// you if your guess was correct
// based on a random correct answer

#include <cstdlib>
//#include <ctime>
#include <time.h>

#include <cmath>
#include <iostream>
#include <random>

int main() {
    // Declaring variables
    int userGuess, correctGuess;

    // initializing random seed
    std::random_device rseed;

    std::mt19937 rgen(rseed());

    // initializing random number code
    std::uniform_int_distribution<int> idist(0, 9);

    // making random number variable
    correctGuess = idist(rgen);

    // Input
    std::cout << "This program asks for a number\n";
    std::cout << "between 1 and 9, and then tells\n";
    std::cout << "you if your guess was correct\n";
    std::cout << "\n";
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> userGuess;

    // Process
    if (userGuess == correctGuess) {
        // output
        std::cout << "Your guess is correct!";
    } else {
        std::cout << "Your guess is incorrect.";
        std::cout << "The correct number was ";
        std::cout << correctGuess << ".\endl";
    }
}
