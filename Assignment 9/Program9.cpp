// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include <iostream>

int main() {
    // Declare variables
    int evenNumber;

    // Input the even number
    std::cout << "Enter an even number: ";
    std::cin >> evenNumber;

    // Use a switch statement to convert even number to its upper nearest odd number
    switch (evenNumber % 2) {
        case 0:
            // If even, add 1 to make it odd
            evenNumber += 1;
            std::cout << "The upper nearest odd number is: " << evenNumber << std::endl;
            break;
        case 1:
            // If odd, display a message
            std::cout << "The entered number is already odd." << std::endl;
            break;
    }

    return 0;
}
