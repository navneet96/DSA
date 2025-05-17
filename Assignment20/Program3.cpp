//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>

void sort(int *ptr, int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = i+1; j < size; j++) {
            if(ptr[i] > ptr[j]) {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}

