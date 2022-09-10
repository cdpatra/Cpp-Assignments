// 10.Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int x, int y);
int main()
{
    int x, y;
    printf("Enter the base and exponent respectively\n");
    printf("Enter the base: ");
    scanf("%d", &x);
    printf("Enter the exponent: ");
    scanf("%d", &y);
    printf("%d^%d = %d", x, y, power(x, y));
    return 0;
}
int power(int x, int y)
{
    if (y == 1)
        return x;
    return x * power(x, y - 1);
}