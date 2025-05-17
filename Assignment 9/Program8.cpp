// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include <iostream>

int main() {
    // Declare variables
    int number;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Use a switch statement to toggle between positive and negative
    switch (number > 0) {
        case true:
            std::cout << "Negative of " << number << " is: " << -number << std::endl;
            break;
        case false:
            std::cout << "Absolute value of " << number << " is: " << abs(number) << std::endl;
            break;
    }

    return 0;
}
