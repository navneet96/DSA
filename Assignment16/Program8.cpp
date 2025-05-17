// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main() {
    int mat[3][3];
    printf("Enter matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    printf("Upper Triangular Matrix:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(i <= j)
                printf("%d ", mat[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
