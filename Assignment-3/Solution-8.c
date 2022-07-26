// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year to check whether it is a leap year or not : ");
    scanf("%d", &year);
    if (year % 4 == 0 || year % 400 == 0)
        printf("The given year is a leap.");
    else
        printf("The given year is not a leap year.");
    return 0;
}