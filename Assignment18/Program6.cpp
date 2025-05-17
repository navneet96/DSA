/*
6. Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)
*/
#include<stdio.h>
#include<string.h>
int isAlphanumeric(const char *str) {
    int hasAlpha = 0, hasDigit = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            hasAlpha = 1;
        else if (str[i] >= '0' && str[i] <= '9')
            hasDigit = 1;
    }
    return hasAlpha && hasDigit;
}

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);

    printf("Alphanumeric: %s\n", isAlphanumeric(str1) ? "Yes" : "No");

    return 0;
}