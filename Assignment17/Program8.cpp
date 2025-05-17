// 8. Write a program in C to copy one string to another string.
#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';

    printf("Copied string: %s", destination);
    return 0;
}
