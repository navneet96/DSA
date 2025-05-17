/*
 Write a function in C to merge two arrays of 
the same size sorted in descending order.
*/
#include<stdio.h>

void mergeAndSortDescending(int arr1[],int arr2[],int n){

    int merged[2*n];

    for(int i =0; i<n; i++)
        merged[i] = arr1[i];

    for(int i = 0; i < n; i++)
        merged[n+i] = arr2[i];

    for(int i = 0; i < 2 * n -1 ; i++ ){
        for(int j = 0; j<2 * n - 1; j++){
            if(merged[j] < merged[j+1]){
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }
    printf("Merged and Sorted array in descending order:\n");
    for(int i = 0 ; i < 2*n ; i++)
        printf("%d ", merged[i]);
    printf("\n");

}
int main(){

    int n ;
    printf("Enter the size of each array = ");
    scanf("%d", &n);

    int arr1[n],arr2[n];

    printf("Enter %d elements for first array:\n",n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter %d elements for second array:\n",n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

        mergeAndSortDescending(arr1,arr2,n);
    return 0;
}