#include <iostream>

int main() {
    // Declare variables
    int units;
    double bill = 0.0;

    // Input the electricity units
    std::cout << "Enter the electricity units consumed: ";
    std::cin >> units;

    // Calculate the electricity bill using a switch statement
    switch (units) {
        case 0 ... 50:
            bill = units * 0.50;
            break;
        case 51 ... 150:
            bill = 50 * 0.50 + (units - 50) * 0.75;
            break;
        case 151 ... 250:
            bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
            break;
        default:
            bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
            break;
    }

    // Add surcharge of 20%
    bill *= 1.20;

    // Display the total electricity bill
    std::cout << "Total electricity bill: Rs. " << bill << std::endl;

    return 0;
}
