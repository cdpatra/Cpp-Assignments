// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter any number to check whether it is present in the Fibonacci series or not : ");
    scanf("%d", &n);
    for (;;)
    {
        c = a + b;
        if (n == c)
        {
            printf("%d is present in the Fibonacci Series", n);
            break;
        }
        if (c > n)
        {
            printf("%d is not present in the Fiboancci Series", n);
            break;
        }
        a = b;
        b = c;
    }
    return 0;
}