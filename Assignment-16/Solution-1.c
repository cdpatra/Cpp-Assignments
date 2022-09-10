// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int matrix_1[3][3], matrix_2[3][3], sum[3][3], i, j;
    printf("Enter numbers in matrix one\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix_1[i][j]);
    printf("Enter numbers in matrix two\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix_2[i][j]);
    printf("The sum of given two matrices is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", sum[i][j] = matrix_1[i][j] + matrix_2[i][j]);
        printf("\n");
    }
}