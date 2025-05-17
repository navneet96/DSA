/*4. Write a program in C to demonstrate how to handle the pointers in the program.
*/
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    printf("Value of a = %d\n", *ptr);
    printf("Address of a = %p\n", ptr);
    return 0;
}
