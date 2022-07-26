// 2. Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether it is divisible by 5 of not : ");
    scanf("%d", &number);
    if (number % 5)
        printf("The given number is not divisble by 5");
    else
        printf("The given number is divisible by 5");
    return 0;
}