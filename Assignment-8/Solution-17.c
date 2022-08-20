// Pattern-17
#include <stdio.h>
int main()
{
    int row, column;
    for (row = 1; row < 6; row++)
    {
        for (column = 1; column < 10; column++)
        {
            if (column == row || column == 10 - row)
                printf("*");
            else if (row > 1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}