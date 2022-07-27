// 8. Write a program to check whether a given number is a Prime number or not.
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter any number to check whether it is prime or not : ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("The given number is not a prime number");
            break;
        }
    }
    if (n == 1)
        printf("The given number is not a prime number");
    else if (i > n / 2)
        printf("The given number is a prime number");
    return 0;
}