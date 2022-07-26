// 1. Write a program to print unit digit of a given number
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("The unit digit of %d is %d", number, number % 10);
    return 0;
}