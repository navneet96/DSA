/*
9. Write a program that asks the user to enter a username.
 If the username entered is one of the names in the list then 
 the user is allowed to calculate the factorial of a number.
 Otherwise, an error message is displayed
*/
#include <stdio.h>
#include <string.h>

int isValidUsername(char username[]) {
    char validUsernames[3][100] = {"Alice", "Bob", "Charlie"};
    for (int i = 0; i < 3; i++) {
        if (strcmp(username, validUsernames[i]) == 0) {
            return 1;  // Valid username
        }
    }
    return 0;  // Invalid username
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    char username[100];
    int num;

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';  // Remove newline character

    if (isValidUsername(username)) {
        printf("Enter a number to calculate factorial: ");
        scanf("%d", &num);
        printf("Factorial of %d is %d\n", num, factorial(num));
    } else {
        printf("Invalid username. Access denied.\n");
    }

    return 0;
}
