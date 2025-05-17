/*
Write a program to print the strings which are palindrome in the list of strings.
*/
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Palindrome
}

int main() {
    char strings[5][100];
    
    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';  // Remove the newline character
    }

    printf("Palindromes:\n");
    for (int i = 0; i < 5; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}
