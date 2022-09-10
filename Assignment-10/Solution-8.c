// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int permutation(int n, int r);
int fact(int n);
int main()
{
    int n, r;
    printf("Enter the value of n for n items and r for r selected at a time to calculate the number of permutations\n");
    scanf("%d%d", &n, &r);
    printf("The total number of permutations are %d", permutation(n, r));
    return 0;
}
int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
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