// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include <iostream>
#include <cmath>

// Function to check if given lengths form an isosceles triangle
bool isIsosceles(int a, int b, int c) {
    return (a == b || b == c || c == a);
}

// Function to check if given lengths form a right-angled triangle
bool isRightAngled(int a, int b, int c) {
    return (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b);
}

// Function to check if given lengths form an equilateral triangle
bool isEquilateral(int a, int b, int c) {
    return (a == b && b == c);
}

int main() {
    char choice;

    do {
        // Display menu
        std::cout << "Menu:" << std::endl;
        std::cout << "a. Check for Isosceles Triangle" << std::endl;
        std::cout << "b. Check for Right-Angled Triangle" << std::endl;
        std::cout << "c. Check for Equilateral Triangle" << std::endl;
        std::cout << "d. Exit" << std::endl;
        std::cout << "Enter your choice (a/b/c/d): ";
        std::cin >> choice;

        switch (choice) {
            case 'a': {
                // Input sides
                int side1, side2, side3;
                std::cout << "Enter three sides of the triangle: ";
                std::cin >> side1 >> side2 >> side3;

                // Check for isosceles triangle
                if (isIsosceles(side1, side2, side3))
                    std::cout << "The given lengths form an isosceles triangle." << std::endl;
                else
                    std::cout << "The given lengths do not form an isosceles triangle." << std::endl;

                break;
            }
            case 'b': {
                // Input sides
                int side1, side2, side3;
                std::cout << "Enter three sides of the triangle: ";
                std::cin >> side1 >> side2 >> side3;

                // Check for right-angled triangle
                if (isRightAngled(side1, side2, side3))
                    std::cout << "The given lengths form a right-angled triangle." << std::endl;
                else
                    std::cout << "The given lengths do not form a right-angled triangle." << std::endl;

                break;
            }
            case 'c': {
                // Input sides
                int side1, side2, side3;
                std::cout << "Enter three sides of the triangle: ";
                std::cin >> side1 >> side2 >> side3;

                // Check for equilateral triangle
                if (isEquilateral(side1, side2, side3))
                    std::cout << "The given lengths form an equilateral triangle." << std::endl;
                else
                    std::cout << "The given lengths do not form an equilateral triangle." << std::endl;

                break;
            }
            case 'd':
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option (a/b/c/d)." << std::endl;
        }

    } while (choice != 'd');

    return 0;
}
