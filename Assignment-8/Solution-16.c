// Pattern-16
#include <stdio.h>
int main()
{
    int row, column;
    for (row = 1; row < 6; row++)
    {
        for (column = 1; column < 10; column++)
        {
            if (column == 6 - row || column == 4 + row)
                printf("*");
            else if (row < 5)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}