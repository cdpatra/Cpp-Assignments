// 4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void Print_N(int n);
int main()
{
    int n;
    printf("Enter the value of 'n' to print n natural numbers: ");
    scanf("%d", &n);
    Print_N(n);
    return 0;
}
void Print_N(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
}