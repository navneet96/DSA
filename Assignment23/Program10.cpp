//Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

void countFrequency(int arr[], int n) {
    int freq[n];
    
    // Initialize all elements of freq[] to -1
    for (int i = 0; i < n; i++)
        freq[i] = -1;

    for (int i = 0; i < n; i++) {
        if (freq[i] != -1)  // Already counted
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Mark as counted
            }
        }

        freq[i] = count;  // Store frequency
    }

    // Print element and its frequency
    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0)
            printf("%d\t%d\n", arr[i], freq[i]);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countFrequency(arr, n);
    return 0;
}
