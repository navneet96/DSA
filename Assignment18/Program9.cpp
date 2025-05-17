/*
 9. Write a function to reverse a string word wise. (For example if the given string is
  “Mysirg Education Services” 
 then the resulting string should be “Services Education Mysirg” )
*/
#include <stdio.h>
#include <string.h>
void reverseWords(char *str) {
    char *words[100];
    int count = 0;
    char *token = strtok(str, " \n");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \n");
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i != 0) printf(" ");
    }
    printf("\n");
}
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);



      printf("Reverse word wise: ");
    reverseWords(str1);


    return 0;
}