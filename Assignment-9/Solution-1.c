// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the month's number to get number of days present in that month\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    case 2:
        printf("28 days or 29 days in leap year");
        break;
    default:
        printf("The input is invalid");
        break;
    }
}