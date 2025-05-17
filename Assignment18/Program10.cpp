//10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>
void findRepeatedChars(const char *str) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    printf("Repeated characters: ");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1)
            printf("%c ", i);
    }
    printf("\n");
}
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    findRepeatedChars(str1);

    return 0;
}
