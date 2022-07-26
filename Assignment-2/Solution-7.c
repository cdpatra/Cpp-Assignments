// 7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to get the position of first 1 in LSB : ");
    scanf("%d", &number);
    for (int i = 1;; i++)
    {
        if (number & 1)
        {
            printf("The position of first 1 in LSB is : %d", i);
            break;
        }
        number = number >> 1;
    }
    return 0;
}