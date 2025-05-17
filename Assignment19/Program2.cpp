//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <string.h>

int main() {
    char cities[10][100], temp[100];
    
    printf("Enter 10 city names:\n");
    for (int i = 0; i < 10; i++) {
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';  // Remove the newline character
    }

    // Sorting cities in ascending order
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }

    printf("Sorted city names:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}
