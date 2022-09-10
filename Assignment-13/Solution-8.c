// 8.Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
void fibonacci_n(int n);
int main()
{
    int n;
    printf("Enter the value of n to print first n termso f fibonacci series: ");
    scanf("%d", &n);
    fibonacci_n(n);
    return 0;
}
void fibonacci_n(int n)
{
    if (n == 0)
        return;
    static int a = -1;
    static int b = 1;
    int c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
    fibonacci_n(n - 1);
}