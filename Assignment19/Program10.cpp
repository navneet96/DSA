//10. Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <string.h>

int isAuthenticated(char username[], char password[]) {
    return (strcmp(username, "admin") == 0 && strcmp(password, "password123") == 0);
}

int main() {
    char username[100], password[100];
    int choice;

    printf("Authentication System\n");
    printf("1. Login\n2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        if (isAuthenticated(username, password)) {
            printf("Login successful!\n");
        } else {
            printf("Login failed!\n");
        }
    } else {
        printf("Exiting...\n");
    }

    return 0;
}
