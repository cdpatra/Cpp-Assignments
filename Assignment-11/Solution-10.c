// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>
int sum_series(int n);
int fact(int n);
int main()
{
    int n;
    printf("Enter the value of n to find the sum of 1! /1+2!/2+3!/3+4!/4+5!/5..... upto n terms: ");
    scanf("%d", &n);
    printf("The sum of the series upto %d terms is %d", n, sum_series(n));
    return 0;
}
int sum_series(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += fact(i) / i;
    return sum;
}
int fact(int n)
{
    if (n == 0)
        return 1;
    else
    {
        int f = 1;
        while (n)
        {
            f *= n;
            n--;
        }
        return f;
    }
}