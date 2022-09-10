// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
void fibonacci(int n);
int main()
{
    int n;
    printf("Enter the value of 'n' to print first n terms of Fiboancci series : ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a = -1, b = 1, c;
    while (n)
    {
        c = a + b;
        printf("%d ", c);
        n--;
        a = b;
        b = c;
    }
}