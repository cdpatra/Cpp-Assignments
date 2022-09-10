// 8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>
void Pascal(int n);
int combination(int n, int r);
int fact(int n);
int main()
{
    int row;
    printf("Enter the number of rows to print the pascal triangle of given number of rows: ");
    scanf("%d", &row);
    Pascal(row);
    return 0;
}
void Pascal(int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (j >= (n - 1) - i)
            {
                printf("%d ", combination(i, k));
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int fact(int n)
{
    if (n == 0)
        return 1;
    else
    {
        int f = 1;
        while (n)
        {
            f *= n;
            n--;
        }
        return f;
    }
}