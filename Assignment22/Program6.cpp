/*
Write a function in C to read n number of values in 
an array and display it in reverse order.
*/
#include<stdio.h>

void readAndPrintReverse(int arr[], int n) {
    // Reading values into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing array in reverse order
    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){

    int n ;
    printf("Enter the number of element = ");
    scanf("%d",&n);
    int arr[n];
    readAndPrintReverse(arr, n);

    return 0;
}
