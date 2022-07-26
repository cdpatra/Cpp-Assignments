// 5. Write a program to input a three-digit 2ber and display the sum of the digits.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter 3 numbers to get the sum of them : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("The sum of given 3 numbers is %d", num1 + num2 + num3);
    return 0;
}