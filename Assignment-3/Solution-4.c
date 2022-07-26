// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether the number is even or odd : ");
    scanf("%d", &number);
    if (number - number / 2 * 2)
        printf("The given number is Odd");
    else
        printf("The given number is Even");
    return 0;
}