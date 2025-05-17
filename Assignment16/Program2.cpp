//2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main() {
    int a[3][3], b[3][3], prod[3][3] = {0};

    printf("Enter matrix A:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &b[i][j]);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                prod[i][j] += a[i][k] * b[k][j];

    printf("Product of matrices:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}
