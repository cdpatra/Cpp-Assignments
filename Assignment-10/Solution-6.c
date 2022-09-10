// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter any number to calculate its factorial ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, fact(num));
    return 0;
}
int fact(int n)
{
    int f = 1;
    if (n == 0)
        return 1;
    else
    {
        for (int i = 1; i <= n; i++)
            f *= i;
    }
    return f;
}