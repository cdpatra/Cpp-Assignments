// Pattern-19
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 13; i++)
    {
        for (j = 0; j < 19; j++)
        {
            if (((i < 3) && ((j >= 2 - i && j <= 6 + i) || (j >= 12 - i && j <= 16 + i))) || ((i > 3) && (j >= i - 3 && j <= 21 - i)))
                printf("*");
            else if (i == 3)
            {
                printf("******MySirG*******");
                break;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}