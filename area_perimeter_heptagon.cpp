// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: Mar 12th, 2025
// This program calculates the area and
// perimeter of a heptagon.
#include <cmath>
#include <iostream>

int main() {
    float area;
    float side;
    float perimeter;
    float radians = 1.0 / tan(M_PI / 7);
    // The initial greeting
    std::cout << "Hello & Welcome to Adwok's Heptagon formula !" << std::endl;
    // Input
    std::cout << "Enter the side of the heptagon : " << std::endl;
    std::cin >> side;
    // Process
    area = (7.0 / 4.0) * pow(side, 2) * radians;
    perimeter = (7 * side);
    // Output
    std::cout << "The Area of the heptagon is: " << area << "cm^2" << std::endl;
    std::cout << "The Perimeter of the heptagon is: " << perimeter << " cm" <<
    std::endl;
}
