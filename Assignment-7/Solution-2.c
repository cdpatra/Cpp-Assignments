// 2. Write a program to print first N terms of Fibonacci series.
#include <stdio.h>
int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter the value of 'n' to print first 'n' terms of Fibonacci series : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}