// Pattern-18
#include <stdio.h>
int main()
{
    int row, column;
    for (row = 0; row < 9; row++)
    {
        for (column = 0; column < 9; column++)
        {
            if ((column >= 4 - row && column <= 4 + row) && (row <= 4) || (column >= row - 4 && column <= 12 - row) && (row > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}