//1. Write a program to calculate the length of the string. (without using built-in method)

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}

