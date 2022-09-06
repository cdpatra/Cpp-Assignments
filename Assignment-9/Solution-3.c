// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include <stdio.h>
int main()
{
    int day_number;
    printf("Enter the day number of a week to get unique greeting message for the day\n");
    scanf("%d", &day_number);
    switch (day_number)
    {
    case 1:
        printf("Have a magnificent Monday");
        break;
    case 2:
        printf("Have a beautiful Tuesday");
        break;
    case 3:
        printf("Have a wonderful Wednesday");
        break;
    case 4:
        printf("Have a beautiful Thursday");
        break;
    case 5:
        printf("Have a fabulous Friday");
        break;
    case 6:
        printf("Have a beautiful Saturday");
        break;
    case 7:
        printf("Have a beautiful Sunday");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}