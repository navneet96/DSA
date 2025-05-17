/*
7. Write a program to count the number of vowels and consonants in a string using a
pointer.*/

#include <stdio.h>


int main() {
   char str[] = "HelloWorld";
   char *p = str;
   int vowels = 0, consonants = 0;  
    printf("String = %s\n",p);
   while (*p)           
   {
    if((*p >= 'a' && *p <= 'z' ) || (*p >= 'A' && *p <= 'Z' )){
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || 
        *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' )
            vowels++;
        else
            consonants++;

    }
    p++;
   }
   printf("Vowels = %d\n Consonants = %d\n",vowels,consonants);
    return 0;
}
