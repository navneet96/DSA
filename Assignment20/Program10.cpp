//10. Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include<string.h>
int main(){

    char str[] = "Pointer";
    char *p = str + strlen(str)-1;
    printf("Reverse: ");
    while (p >= str)
    {
        printf("%c",*p);
        p--;
    }
    
    return 0;
}