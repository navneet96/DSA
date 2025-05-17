//3. Write a function to compare two strings.

#include <stdio.h>
#include <string.h>
int compareStrings(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return str1[i] == str2[i];
}
int main() {
 char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);

    printf("Enter another string to compare: ");
    fgets(str2, 100, stdin);
    printf("Strings are %s\n", compareStrings(str1, str2) ? "equal" : "not equal");

    return 0;
}
