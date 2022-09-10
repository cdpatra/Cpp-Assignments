// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int martix[3][3], i, j;
    printf("Enter any matrix to print its transpose\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &martix[i][j]);
    printf("The transpose of the given matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", martix[j][i]);
        printf("\n");
    }
}