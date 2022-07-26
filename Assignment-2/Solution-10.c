// 10. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
#include <stdio.h>
int main()
{
    int number, variable;
    printf("Enter any number to make the last digit zero : ");
    scanf("%d", &number);
    variable = number / 10 * 10;
    printf("The required number is : %d", variable);
    return 0;
}