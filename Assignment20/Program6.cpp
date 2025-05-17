/*
6. Write a program to calculate the length of the string using a pointer
*/
#include<stdio.h>

int main(){

    char str[] = "Hello";
    char *p = str;
    int length = 0;
    while (*p != '\0')
    {
        length++;
        p++;
    }
    printf("Length = %d\n",length);

    
    return 0;
}
