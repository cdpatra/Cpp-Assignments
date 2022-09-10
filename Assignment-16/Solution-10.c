// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int matrix[3][3], i, j, a = 0, b = 0, c = 0;
    printf("Enter the matrix to find the row with maximum number of 1s:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[3][3]);
            if (i == 0 && matrix[i][j] == 1)
                a++;
            else if (i == 1 && matrix[i][j] == 1)
                b++;
            else if (i == 2 && matrix[i][j] == 1)
                c++;
        }
    if (a > b)
        if (c > a)
            printf("3 row has maximum number of 1s");
        else
            printf("1 row has maximum number of 1s");
    else if (b > c)
        printf("2 row has maximum number of 1s");
    else
        printf("3 row has maximum number of 1s");
}