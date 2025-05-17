//5. Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    int max = (*p1 > *p2) ? *p1 : *p2;
    printf("Maximum = %d\n", max);
    return 0;
}
