//10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>
int main() {
    int mat[3][3];
    printf("Enter binary matrix (0 or 1 only):\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    int maxOnes = 0, rowIndex = -1;
    for(int i=0;i<3;i++) {
        int count = 0;
        for(int j=0;j<3;j++)
            if(mat[i][j] == 1) count++;

        if(count > maxOnes) {
            maxOnes = count;
            rowIndex = i;
        }
    }

    if(rowIndex != -1)
        printf("Row %d has the maximum number of 1s: %d\n", rowIndex + 1, maxOnes);
    else
        printf("No 1s found in the matrix.\n");

    return 0;
}
