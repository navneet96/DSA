/*
9. Write a program to print the elements of an array in reverse order.*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr + 4;
    printf("Reverse: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p - i));
    }
    return 0;
}
