//4. Write a function to transform string into uppercase

#include<stdio.h>
#include<string.h>
void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);

    toUpperCase(str1);
    printf("Uppercase: %s\n", str1);


    return 0;
}