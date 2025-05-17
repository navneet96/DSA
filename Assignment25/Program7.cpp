/*
Write a function in C to count a total number of duplicate elements in an array.
*/

#include <stdio.h>

int countDuplicates(int arr[], int n) {
    int count = 0;
    int visited[n];

    // Initialize visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int dupCount = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;  // Mark as counted
                dupCount = 1;    // Found at least one duplicate
            }
        }

        if (dupCount)
            count++;
    }

    return count;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Variable-length array (C99+)
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int duplicateCount = countDuplicates(arr, n);
    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
