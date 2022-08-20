// 8. Write a program to find next Prime number of a given number.
#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter any number to print the next Prime number : ");
    scanf("%d", &num);
    for (i = num + 1;; i++)
    {
        for (j = 2; j <= num / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > num / 2)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}