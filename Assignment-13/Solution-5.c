// 5.Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sum_of_digits(int n);
int main()
{
    int num;
    printf("Enter any number to calculate sum of digits of that number: ");
    scanf("%d", &num);
    printf("The sum of digits of the given number is: %d", sum_of_digits(num));
    return 0;
}
int sum_of_digits(int n)
{
    if (n / 10 == 0)
        return n;
    return n % 10 + sum_of_digits(n / 10);
}