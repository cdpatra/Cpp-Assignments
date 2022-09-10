// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main()
{
    int matrix[3][3], i, j, sum_rows, sum_columns;
    printf("Enter any matrix to find the sum of rows and cloumns of the given matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    for (i = 0; i < 3; i++)
    {
        sum_rows = 0;
        sum_columns = 0;
        for (j = 0; j < 3; j++)
        {
            sum_rows = sum_rows + matrix[i][j];
            sum_columns = sum_columns + matrix[j][i];
        }
        printf("Sum of row %d is %d and ", i + 1, sum_rows);
        printf("Sum of column %d is %d\n", i + 1, sum_columns);
    }
    return 0;
}