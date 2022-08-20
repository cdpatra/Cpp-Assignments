// Pattern-14
#include <stdio.h>
int main()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= row; column++)
        {
            if (column == 1 || column == row)
                printf("*");
            else if (row < 5)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}