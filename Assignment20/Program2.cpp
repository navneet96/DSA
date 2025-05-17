//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
#include <string.h>

void swapStrings(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[100] = "Hello", str2[100] = "World";
    printf("Before Swap: %s, %s\n", str1, str2);
    swapStrings(str1, str2);
    printf("After Swap: %s, %s\n", str1, str2);
    return 0;
}
