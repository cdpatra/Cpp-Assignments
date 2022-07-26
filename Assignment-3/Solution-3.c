// 3. Write a program to check whether a given number is an even number or an odd number.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether the given number is even or odd : ");
    scanf("%d", &number);
    if (number % 2)
        printf("The given number is odd");
    else
        printf("The given number is even");
    return 0;
}