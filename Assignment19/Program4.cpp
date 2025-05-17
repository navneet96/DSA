/*Write a program to search a string in the list of strings.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][100], search[100];
    int found = 0;
    
    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';  // Remove the newline character
    }

    printf("Enter the string to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';  // Remove the newline character

    for (int i = 0; i < 5; i++) {
        if (strcmp(strings[i], search) == 0) {
            printf("Found '%s' at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("String '%s' not found.\n", search);
    }

    return 0;
}
