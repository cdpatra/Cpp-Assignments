// 1. Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether it is positive or non-positive : ");
    scanf("%d", &number);
    if (number <= 0)
        printf("non-");
    printf("positive");
    return 0;
}