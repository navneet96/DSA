// Program to check whether a year is a leap year or not. Using switch
// statement
#include <iostream>

int main() {
    // Declare variables
    int year;

    // Input the year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if the year is a leap year using a switch statement
    switch (year % 4) {
        case 0:
            // If divisible by 4, further check for special cases
            if (year % 100 == 0) {
                // If divisible by 100, check for a leap year only if also divisible by 400
                if (year % 400 == 0) {
                    std::cout << year << " is a leap year." << std::endl;
                } else {
                    std::cout << year << " is not a leap year." << std::endl;
                }
            } else {
                std::cout << year << " is a leap year." << std::endl;
            }
            break;
        default:
            std::cout << year << " is not a leap year." << std::endl;
            break;
    }

    return 0;
}
