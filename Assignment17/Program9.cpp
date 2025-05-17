/*
 9. Write a C program to sort a string array in ascending order.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}
