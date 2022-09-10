// 7.Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int HCF(int a, int b);
int main()
{
    int a, b;
    printf("Enter two numbers to calculate HCF of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("The HCF of the given number is: %d", HCF(a, b));
    return 0;
}
int HCF(int a, int b)
{
    int i;
    for (i = 2; i <= a; i++)
        if (a % i == 0 && b % i == 0)
            break;
    if (i > a)
        return 1;
    return i * HCF(a / i, b / i);
}
