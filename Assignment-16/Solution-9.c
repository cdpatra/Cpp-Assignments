// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int matrix[3][3], i, j, count = 0;
    printf("Enter the matrix to check whether it is sparse matrix or not:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[3][3]);
            if (matrix[i][j] != 0)
                count++;
        }
    if (count > 9 / 2.0)
        printf("The given matrix is sparse matrix");
    else
        printf("The given matrix is not a sparse matrix");
}