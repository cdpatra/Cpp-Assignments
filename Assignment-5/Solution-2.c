// 2. Write a program to print the first N natural numbers.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of 'n' to print the first 'n' natural numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}