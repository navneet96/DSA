/*
6. Write a program in C to find the sum of rows and columns of a Matrix.
*/
#include <stdio.h>
int main() {
    int mat[3][3];
    printf("Enter matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    for(int i=0;i<3;i++) {
        int rowSum = 0, colSum = 0;
        for(int j=0;j<3;j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        printf("Row %d sum = %d, Column %d sum = %d\n", i+1, rowSum, i+1, colSum);
    }
    return 0;
}
