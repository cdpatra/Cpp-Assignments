// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter the value of 'n' to print the 'n'th term of the Fibonnaci series : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The 'n'th term of the Fibonnaci series is %d", c);
    return 0;
}