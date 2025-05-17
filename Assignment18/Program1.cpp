//1. Write a function to calculate length of the string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    printf("Length: %d\n", stringLength(str));

    return 0;

}