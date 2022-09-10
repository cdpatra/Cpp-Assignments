// 9.Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int count(int n);
int main()
{
    int n;
    printf("Enter any number to count the digit in it: ");
    scanf("%d", &n);
    printf("The number of digits present in %d is %d", n, count(n));
    return 0;
}
int count(int n)
{
    if (n <= 9)
        return 1;
    return 1 + count(n / 10);
}