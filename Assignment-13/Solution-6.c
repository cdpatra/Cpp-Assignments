// 6.Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter any number to calculate factorial of than number: ");
    scanf("%d", &n);
    printf("The factorial of %d is: %d", n, fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}