// Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int sum_Even(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the sum of first n even natural numbers: ");
    scanf("%d", &n);
    printf("The sum of first n even natural numbers is %d", sum_Even(n));
    return 0;
}
int sum_Even(int n)
{
    if (n == 1)
        return 2;
    return 2 * n + sum_Even(n - 1);
}