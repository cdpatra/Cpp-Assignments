// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include <stdio.h>
int main()
{
    float INR_currency;
    printf("Enter the amount in INR : ");
    scanf("%f", &INR_currency);
    printf("The amount in USD is : %f", INR_currency / 76.23);
    return 0;
}