// 8. Write a function to count words in a given string
#include <stdio.h>
#include <string.h>
int countWords(const char *str) {
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);

    printf("Word count: %d\n", countWords(str1));

    return 0;
}
