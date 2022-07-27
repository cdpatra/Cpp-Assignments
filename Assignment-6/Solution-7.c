// 7. Write a program to count digits in a given number.
#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Enter any number to count digits in it : ");
    scanf("%d", &number);
    while (number != 0)
    {
        count++;
        number = number / 10;
    }
    printf("The number of digits in the given number is %d", count);
    return 0;
}