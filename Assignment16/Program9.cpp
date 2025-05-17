/*
 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
*/
#include <stdio.h>
int main() {
    int mat[3][3], zeroCount = 0;
    printf("Enter matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 0)
                zeroCount++;
        }

    if(zeroCount > 4)
        printf("Matrix is sparse.\n");
    else
        printf("Matrix is not sparse.\n");

    return 0;
}
