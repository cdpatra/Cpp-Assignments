// Pattern-12
#include <stdio.h>
int main()
{
    int row, column;
    char chr;
    for (row = 0; row < 4; row++)
    {
        chr = 'A';
        for (column = 0; column < 7; column++)
        {
            if (column >= row && column <= 6 - row)
            {
                printf("%c", chr);
                if (column < 3)
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