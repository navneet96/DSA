//3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
#include<string.h>
int main() {
    char strings[3][100];
    
    printf("Enter 3 strings:\n");
    for (int i = 0; i < 3; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';  // Remove the newline character
    }

    printf("You entered the following strings:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
