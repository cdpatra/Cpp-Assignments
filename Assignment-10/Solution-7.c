// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int combination(int n, int r);
int fact(int n);
int main()
{
    int n, r;
    printf("Enter the value of n for n items and r for r selected at a time to calculate the number of combinations\n");
    scanf("%d%d", &n, &r);
    printf("The total number of combinations are %d", combination(n, r));
    return 0;
}
int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
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