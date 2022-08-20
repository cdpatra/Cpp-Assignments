// Pattern-11
#include <stdio.h>
int main()
{
    int row, column;
    char chr;
    for (row = 0; row < 5; row++)
    {
        chr = 'A';
        for (column = 0; column < 9; column++)
        {
            if (column >= 4 - row && column <= 4 + row)
            {
                printf("%c", chr);
                if (column < 4)
                    chr++;
                else
                    chr--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}