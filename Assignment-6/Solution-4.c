// 4. Write a program to calculate sum of squares of first N natural numbers.
#include <stdio.h>
int main()
{
    int i, n, sum_of_squares = 0;
    printf("Enter the value of 'n' to calculate sum of squares of first 'n' natural numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum_of_squares = sum_of_squares + i * i;
    printf("The sum of square of first %d natural numbers is %d", n, sum_of_squares);
    return 0;
}