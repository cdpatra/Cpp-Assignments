// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether it is divisible by 7 or divisble by 3 : ");
    scanf("%d", &number);
    if (number % 7 == 0 || number % 3 == 0)
        printf("The given number is divisible by 7 or divisible by 3");
    else
        printf("The given number is not divisible by 7 or divisible by 3");
}