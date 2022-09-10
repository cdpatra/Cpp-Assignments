// 4. Write a program in C to find the sum of right diagonals of a matrix.
#include <stdio.h>
int main()
{
    int matrix[3][3], i, j;
    printf("Enter any matrix to find the sum of right diagonals of the given matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    printf("The sum of right diagonals of the given matrix is %d", matrix[0][0] + matrix[1][1] + matrix[2][2]);
    return 0;
}