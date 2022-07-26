// 5. Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether the given number is three-digit number or not : ");
    scanf("%d", &number);
    if (number / 1000)
        printf("The given number is not three-digit number.");
    else
        printf("The given number is three-digit number.");
    return 0;
}