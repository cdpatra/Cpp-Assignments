// 3. Write a program to calculate sum of first N odd natural numbers.
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of 'n' to claculate sum of first 'n' odd natural numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + (2 * i - 1);
    printf("The sum of first %d odd natural numbers is %d", n, sum);
    return 0;
}