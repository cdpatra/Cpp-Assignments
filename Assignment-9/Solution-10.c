// 10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    printf("Enter the coefficient of the quadratic equation (ax^2+bx+c) to get the roots of the guadratic equation\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    d = (b * b - 4 * a * c);
    printf("The roots of the quadratic equation is ");
    switch (d >= 0)
    {
    case 1:
        printf("%.2f and %.2f", (-b / (2.0 * a)) - (sqrt(d) / 2.0 * a), (-b / (2.0 * a)) + (sqrt(d) / 2.0 * a));
        break;
    case 0:
        printf("%.2f-%.2fi and %.2f+%.2fi", (-b / (2.0 * a)), (sqrt(-d) / 2.0 * a), (-b / (2.0 * a)), (sqrt(-d) / 2.0 * a));
        break;
    }
}