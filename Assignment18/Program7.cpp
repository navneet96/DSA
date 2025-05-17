/*
7. Write a function to check whether a given string is palindrome or not.
*/
#include <stdio.h>
#include <string.h>
int isPalindrome(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);

    printf("Palindrome: %s\n", isPalindrome(str1) ? "Yes" : "No");

    return 0;
}