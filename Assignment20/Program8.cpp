// 8. Write a program to compute the sum of all elements in an array using pointers.


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr, sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += *(p + i);
    }
    printf("Sum = %d\n", sum);
    return 0;
}
