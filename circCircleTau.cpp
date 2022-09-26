// Copyright (c) 2021 Spencer Scarlett All rights reserved.
//
// Created by: Spencer Scarlett
// Date: Sept 26, 2022
// Program that calculates circumference of a circle
#include <iostream>

int main() {
    // constant
    const float Tau5 = 6.28;

    // variables
    float radius, circumference;

    // obtain radius from user
    std::cout << "What is the radius? (cm): ";
    std::cin >> radius;

    // calculate answer

    circumference = Tau5 * radius;

    // display end result
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}
