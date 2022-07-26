// 8. Write a program to check whether the given number is even or odd using a bitwise operator.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number to check whether it is even or odd : ");
    scanf("%d", &number);
    if (number & 1)
        printf("ODD");
    else
        printf("EVEN");
    return 0;
}