// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int matrix_1[3][3], matrix_2[3][3], i, j, temp;
    printf("Enter numbers in matrix one\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix_1[i][j]);
    printf("Enter numbers in matrix two\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix_2[i][j]);
    printf("The product of given two matrices is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", (matrix_1[i][0] * matrix_2[0][j] + matrix_1[i][1] * matrix_2[1][j] + matrix_1[i][2] * matrix_2[2][j]));
        }
        printf("\n");
    }
}