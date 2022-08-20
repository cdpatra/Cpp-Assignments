// Pattern-10
#include <stdio.h>
int main()
{
    int row, column, num;
    for (row = 0; row < 4; row++)
    {
        num = 1;
        for (column = 0; column < 7; column++)
        {
            if (column <= 3 - row || column >= 3 + row)
            {
                printf("%d", num);
                if (column < 3)
                    num++;
                else
                    num--;
            }
            else
            {
                printf(" ");
                if (column < 3)
                    num++;
                else
                    num--;
            }
        }
        printf("\n");
    }
}