// Pattern-15
#include <stdio.h>
int main()
{
    int row, column;
    for (row = 1; row < 6; row++)
    {
        for (column = 1; column < 6; column++)
        {
            if (column == 6 - row || column == 5)
                printf("*");
            else if (row < 5)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}