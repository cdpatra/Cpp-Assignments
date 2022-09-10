// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int Ispresent(int number, int digit);
int main()
{
    int number, digit;
    printf("Enter the number and the digit you want to check it is present in it or not\n");
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the digit: ");
    scanf("%d", &digit);
    printf(Ispresent(number, digit) ? "Yes present" : "Not present");
    return 0;
}
int Ispresent(int number, int digit)
{
    while (number)
    {
        if (number % 10 == digit)
            return 1;
        number /= 10;
    }
    return 0;
}