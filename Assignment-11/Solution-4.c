// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int NextPrime(int n);
int main()
{
    int num;
    printf("Enter any number to get next prime number of that number : ");
    scanf("%d", &num);
    printf("The next prime number of %d is %d", num, NextPrime(num));
    return 0;
}
int NextPrime(int n)
{
    int i;
    for (;;)
    {
        n += 1;
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (n == i)
            return n;
    }
}