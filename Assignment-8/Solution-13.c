// Pattern-13
#include <stdio.h>
int main()
{
    int i, j;
    char chr;
    for (i = 0; i < 7; i++)
    {
        chr = 'A';
        for (j = 0; j < 13; j++)
        {
            if (j <= 6 - i || j >= 6 + i)
            {
                printf("%c", chr);
                if (j < 6)
                    chr++;
                else
                    chr--;
            }
            else
            {
                printf(" ");
                if (j < 6)
                    chr++;
                else
                    chr--;
            }
        }
        printf("\n");
    }
}