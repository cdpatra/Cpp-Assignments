// 11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
#include <stdio.h>
int main()
{
    int number, digit;
    printf("Enter any number : ");
    scanf("%d", &number);
    printf("Enter the digit to append it in the number : ");
    scanf("%d", &digit);
    number = number * 10 + digit;
    printf("The desired number is : %d", number);
    return 0;
}