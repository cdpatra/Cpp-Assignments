// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether the given number is divisible by 3 and divisible by 2 : ");
    scanf("%d", &number);
    if (number % 2 == 0 && number % 3 == 0)
        printf("The given number is divisible by 3 and divisible by 2");
    else
        printf("The given number is not divisible by 3 and divisible by 2");
    return 0;
}