// 13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include <stdio.h>
int main()
{
    int number, unit_place_value;
    printf("Enter a three digit number : ");
    scanf("%d", &number);
    unit_place_value = number % 10;
    printf("The roated number towards the right is : %d", unit_place_value * 100 + number / 10);
    return 0;
}