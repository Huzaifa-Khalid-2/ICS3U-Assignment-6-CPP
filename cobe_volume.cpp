// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huaifa Khalid
// Created on: April 2022
// This program calculates the volume of a cube


#include <iostream>
#include <iomanip>
#include <cmath>



float vol(float lengthInt) {
    // This functions calculates volume
    float volume;
    volume = lengthInt * lengthInt * lengthInt;
    return volume;
}

int main() {
    // This function receives input
    std::string lengthStr;
    float lengthInt;
    float volume;

    // Input
    while (true) {
        std::cout << "Enter Length (cm): ";
        std::cin >> lengthStr;

        try {
            lengthInt = std::stof(lengthStr);
            if (lengthInt <= 0) {
                std::cout << "\nlength must be positive you dunce! try again";
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "\nThat is not a number you dunce! try again";
            std::cout << "" << std::endl;
        }
    }
    std::cout << "" << std::endl;

    // Call Functions
    volume = vol(lengthInt);

    // Output
    std::cout << "Volume is " << volume << " cm^3" << std::endl;
    std::cout <<"\nDone";
}
