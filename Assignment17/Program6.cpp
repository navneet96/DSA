/*
6. Write a program to reverse a string.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    j = strlen(str) - 1;

    // if (str[j] == '\n') {
    //     str[j] = '\0';
    //     j--;
    // }

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

