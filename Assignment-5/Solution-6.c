// 6. Write a program to print the first N even natural numbers
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of 'n' to print 'n' even natural numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", 2 * i);
    return 0;
}