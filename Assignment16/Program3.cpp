//Write a program in C to find the transpose of a given matrix.
#include<bits/stdc++.h>
#include <stdio.h>
int main() {
    int mat[3][3], trans[3][3];

    printf("Enter matrix (3x3):\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    printf("Transpose:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            trans[j][i] = mat[i][j];
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}

