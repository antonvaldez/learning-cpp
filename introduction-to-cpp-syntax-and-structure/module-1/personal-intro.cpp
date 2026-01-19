/*
Personal: Introduction Program
Created by: Anton Valdez
Date: 01/19/2026

Description: This program displays personal information about myself in a formatted way on the console.
*/

// Include necessary header
#include <iostream>

// Main function - program execution starts here
int main() {
    // Your code will go here
    // Display header
    std::cout << "====================================" << std::endl;
    std::cout << "       PERSONAL INTRODUCTION        " << std::endl;
    std::cout << "====================================" << std::endl;
    // Greeting with name
    std::cout << "Hello, my name is Anton Valdez!" << std::endl;

    // Display current role
    std::cout << "I am a Jr. Software Tester from AEC Digital Services." << std::endl;

    // Add more personal information
    std::cout << "Favorite Programming Language: C++" << std::endl;
    std::cout << "Hobby: Mixed Martial Arts" << std::endl;

    // Educational background section
    std::cout << "\nEDUCATION" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Degree: BS Civil Engineering" << std::endl;
    std::cout << "School: De La Sale Univeristy" << std::endl;
    std::cout << "Year: 2020" << std::endl;

    // Career goals section
    std::cout << "\nCAREER GOALS" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Short-term: Learn as much about tech as I can" << std::endl;
    std::cout << "Long-term: Contribute to the AI craze" << std::endl;

    // Closing message
    std::cout << "\nThank you for reading my introduction!" << std::endl;

    // Display footer
    std::cout << "====================================" << std::endl;
    // Return statement
    return 0;
}