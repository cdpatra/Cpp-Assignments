// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void Print_NOdd(int n);
int main()
{
    int n;
    printf("Enter the value of 'n' to print n odd natural numbers : ");
    scanf("%d", &n);
    Print_NOdd(n);
    return 0;
}
void Print_NOdd(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", 2 * i - 1);
}