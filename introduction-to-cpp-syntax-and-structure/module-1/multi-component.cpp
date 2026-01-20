#include <iostream> // For input/output operations
#include <iomanip> // For output formatting
#include <string> // For string data type
using namespace std;

// Add additional headers here
#include <chrono>  // For dates
#include <random>  // For random numbers
#include <cmath>   // For mathematical functions

int main() {
    cout << "================================================" << endl;
    cout << "           MULTI-COMPONENT PROGRAM              " << endl;
    cout << "================================================" << endl;
    cout << "This program demonstrates using multiple headers" << endl;
    cout << "and formatting techniques in C++." << endl;
    
    // Component 1: Basic information display
    cout << "\n------------- COMPONENT 1: BASIC INFO -------------" << endl;

    // Create variables to store information
    /*
    A string is a sequence of characters 
    A variable is a storage location that holds a value
    */
    string name = "C++ Programming";
    string version = "C++23";
    string creator = "Bjarne Stroustrup";
    int yearCreated = 1985;
    // Add more variables and facts about C++
    string fact1 = "Best used for Gaming and Software Development";
    bool fact2 = true;
    int fact3 = 0;
    
    // Display the information
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl;

    // Display additional facts
    cout << "Fun Fact: " << fact1 << endl;
    cout << "Is C++ a compiled language? " << (fact2 ? "Yes" : "No") << endl;
    cout << "Number of standard libraries: " << fact3 << endl;

    // Component 2: Formatted numeric output
    cout << "\n---------- COMPONENT 2: FORMATTED NUMBERS ---------" << endl;

    // Create numeric variables
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double goldenRatio = 1.61803398874989484820;

    // Display with different precision
    cout << "Default display:" << endl;
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 6 decimal places:" << endl;
    cout << fixed << setprecision(6);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    // Reset formatting
    cout.unsetf(ios::fixed);
    cout << setprecision(6);
    
    // Component 3: Table display
    cout << "\n------------- COMPONENT 3: TABLE DATA ------------" << endl;

    // Set up table header
    // setw sets the field width for the next output 
    cout << left << setw(15) << "Data Type" << setw(20) << "Size (bytes)" << setw(20) << "Value Range" << endl;
    cout << string(55, '-') << endl;

    // Table rows
    cout << left << setw(15) << "int" << setw(20) << sizeof(int) << setw(20) << "-2^31 to 2^31-1" << endl;
    cout << left << setw(15) << "double" << setw(20) << sizeof(double) << setw(20) << "1.7e^308" << endl;
    cout << left << setw(15) << "char" << setw(20) << sizeof(char) << setw(20) << "-128 to 127" << endl;
    cout << left << setw(15) << "bool" << setw(20) << sizeof(bool) << setw(20) << "true or false" << endl;
    cout << left << setw(15) << "string" << setw(20) << sizeof(string) << setw(20) << "Variable length" << endl;
    cout << left << setw(15) << "float" << setw(20) << sizeof(float) << setw(20) << "3.4e^38" << endl;

    // Component 4: Custom component - Program information
    cout << "\n------------- COMPONENT 4: PROGRAM INFO ------------" << endl;

    // Get current date/time info (simulated)
    string currentDate = "1/20/2026";
    string userName = "anton";
    int linesOfCode = 121;

    // Format and display program information
    cout << "Program: Multi-Component Example" << endl;
    cout << "Author: " << userName << endl;
    cout << "Date: " << currentDate << endl;
    cout << "Code Statistics:" << endl;
    cout << " - Lines of code: " << linesOfCode << endl;
    cout << " - Header files: 5" << endl;
    cout << " - Components: 4" << endl;

    // Display a progress bar (simulated)
    cout << "Completion: [";
    int progress = 80; // 80% complete
    // A loop allows something to happen over and over again 
    for (int i = 0; i < 20; i++) {
        if (i < progress/5) cout << "=";
        else cout << " ";
    }
    cout << "] " << progress << "%" << endl;

    // Component 5: Bonus Challenge
    cout << "\n------------- COMPONENT 5: BONUS CHALLENGE ------------" << endl;
    int n1 = 5;
    double n2 = 3.29881;
    double sum = n1 + n2;
    double product = n1 * n2;

    cout << "5 + 3.29881 = " << sum << endl;
    cout << "5 x 3.29881 = " << product << endl;

    // Program end
    cout << "\nProgram execution completed." << endl;
    return 0;
}