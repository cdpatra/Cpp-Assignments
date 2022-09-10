// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main()
{
    int matrix[3][3], i, j;
    printf("Enter the matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    printf("The upper triangular of the given matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j < i)
                matrix[i][j] = 0;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}