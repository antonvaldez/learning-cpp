#include <iostream>
#include <climits> // For INT_MAX constant
int main() {
    // Declare variables of different data types
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.14159265359;
    char playerRank = 'A';
    bool gameActive = true;
    short smallNumber = 500;
    long long veryLargeNumber = 123456789012345;

    // Display the memory usage of each data type
    std::cout << "Memory Usage Analysis:" << std::endl;
    std::cout << "int uses: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "float uses: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double uses: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "char uses: " << sizeof(char) << " byte" << std::endl;
    std::cout << "bool uses: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "short uses: " << sizeof(short) << " byte" << std::endl;
    std::cout << "long long uses: " << sizeof(long long) << " byte" << std::endl;

        // Test integer limits
    std::cout << "Integer Limits and Overflow:" << std::endl;
    int maxValue = INT_MIN;
    std::cout << "Maximum int value: " << maxValue << std::endl;
    std::cout << "What happens when we add 1: " << maxValue + 1 << std::endl;    
    // Test type casting between different types
    std::cout << "\nType Casting Examples:" << std::endl;
    double precisePrice = 29.95;
    int roundedPrice = static_cast<int>(precisePrice);
    std::cout << "Original price (double): " << precisePrice << std::endl;
    std::cout << "After casting to int: " << roundedPrice << std::endl;    
    // Test character to integer conversion
    char letter = 'A';
    int letterValue = static_cast<int>(letter);
    std::cout << "Character '" << letter << "' has ASCII value: " << letterValue << std::endl;
    
    bool isRaining = false;
    int boolValue = static_cast<int>(isRaining);
    std::cout << "Boolean value of isRaining as int: " << boolValue << std::endl;

    return 0;
}