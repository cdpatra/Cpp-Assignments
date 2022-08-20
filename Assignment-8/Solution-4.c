// Pattern - 4
#include <stdio.h>
int main()
{
    int row, column;
    for (row = 1; row < 6; row++)
    {
        for (column = 1; column < 6; column++)
        {
            if (column >= row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}