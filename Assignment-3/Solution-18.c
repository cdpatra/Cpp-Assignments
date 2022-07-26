// 18. Write a program which takes the month number as an input and display number of days in that month
#include <stdio.h>
int main()
{
    int month_number;
    printf("Enter the month number to display number of days in that month : ");
    scanf("%d", &month_number);
    if (month_number <= 7 ? month_number % 2 : month_number % 2 - 1) // non zero value will be true.
        printf("The month has 31 days");
    else if (month_number == 2)
        printf("The month has 28 days in normal year and 29 days in leap year");
    else
        printf("The month has 30 days");
    return 0;
}