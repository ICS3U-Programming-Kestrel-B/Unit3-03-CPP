// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 6, 2022
// This program asks for a number
// between 1 and 9, and then tells
// you if your guess was correct
// based on a random correct answer

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // Declaring variables
    int userGuess, correctGuess;

    // initializing random seed
    // srand(time, NULL);

    // making correctGuess a random number from 0-9
    correctGuess = (rand() % 9) + 1;

    // correctGuess = rand_r() % 100 + 1;

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
        std::cout << "Your guess is incorrect";
    }
}
