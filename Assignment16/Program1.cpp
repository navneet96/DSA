//1.1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main() {
    int a[3][3], b[3][3], sum[3][3];

    printf("Enter elements of matrix A (3x3):\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B (3x3):\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
