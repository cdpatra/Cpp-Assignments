// 4. Write a recursive function to calculate sum of squares of first n natural
#include <stdio.h>
int sum_N_squares(int n);
int main()
{
    int n;
    printf("Enter the value of n to calculate sum of squares of first n natural numbers: ");
    scanf("%d", &n);
    printf("The sum of square of first %d natural numbers is: %d", n, sum_N_squares(n));
    return 0;
}
int sum_N_squares(int n)
{
    if (n == 1)
        return 1;
    return n * n + sum_N_squares(n - 1);
}