// 6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year to check whether it is leap year or not\n");
    scanf("%d", &year);
    switch (year % 400)
    {
    case 0:
        printf("The given year is a leap year");
        break;
    default:
        switch (year % 4)
        {
        case 0:
            printf("The given year is a leap year");
            break;
        default:
            printf("The given year is not a leap year");
            break;
        }
        break;
    }
}
