// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the leap year program in CPP

#include <iostream>

int main() {
    // this function uses a try statement
    std::string yearAsString;
    int year;

    // input
    std::cout << "Please enter the year: ";
    std::cin >> yearAsString;

    // process and output
    try {
        year = std::stoi(yearAsString);

        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << yearAsString << " is a leap year."<< std::endl;
                } else {
                    std::cout << yearAsString << " is not a leap year."
                    << std::endl;
                }
            } else {
                std::cout << yearAsString << " is a leap year."<< std::endl;
            }

        } else {
            std::cout << yearAsString << " is not a leap year."<< std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << yearAsString << " is not an integer." << std::fixed
        << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
