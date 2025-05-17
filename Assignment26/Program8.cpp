// Write a function in C to print all unique elements in an array.
#include <stdio.h>

void printUniqueElements(int arr[], int n) {
    int isUnique;

    printf("Unique elements are: ");
    for (int i = 0; i < n; i++) {
        isUnique = 1;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printUniqueElements(arr, n);

    return 0;
}
