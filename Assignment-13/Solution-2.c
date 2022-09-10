// 2.Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int sum_Odd(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the sum of first n odd natural numbers: ");
    scanf("%d", &n);
    printf("The sum of first n odd natural numbers is %d", sum_Odd(n));
    return 0;
}
int sum_Odd(int n)
{
    if (n == 1)
        return 1;
    return 2 * n - 1 + sum_Odd(n - 1);
}