// 10. C program to find all roots of a quadratic equation using switch case
#include <iostream>
#include <cmath>

int main() {
    // Declare variables
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    std::cin >> a >> b >> c;

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Convert discriminant to an integer representation
    int discriminantSign;
    if (discriminant > 0) {
        discriminantSign = 1;  // positive
    } else if (discriminant == 0) {
        discriminantSign = 0;  // zero
    } else {
        discriminantSign = -1;  // negative
    }

    // Use a switch statement to find roots based on discriminant
    switch (discriminantSign) {
        case 1:
            // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            std::cout << "Roots are real and distinct:" << std::endl;
            std::cout << "Root 1 = " << root1 << std::endl;
            std::cout << "Root 2 = " << root2 << std::endl;
            break;
        case 0:
            // One real root (repeated)
            root1 = -b / (2 * a);
            std::cout << "Roots are real and repeated:" << std::endl;
            std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
            break;
        case -1:
            // Complex roots
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            std::cout << "Roots are complex and conjugates:" << std::endl;
            std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
            std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
            break;
    }

    return 0;
}
