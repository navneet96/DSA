/*5. Write a program in C to find the sum of left diagonals of a matrix.*/

#include <stdio.h>
int main() {
    int mat[3][3], sum = 0;
    printf("Enter matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    for(int i=0;i<3;i++)
        sum += mat[i][i];

    printf("Sum of left diagonal = %d\n", sum);
    return 0;
}
