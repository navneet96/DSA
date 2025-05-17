//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap: x = %d, y = %d\n", x, y);
    return 0;
}

