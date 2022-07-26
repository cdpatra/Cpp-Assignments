// 15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether it is positibe, negative or zero : ");
    scanf("%d", &number);
    if (number > 0)
        printf("Positive");
    else if (number < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}