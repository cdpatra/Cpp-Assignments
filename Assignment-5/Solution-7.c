// 7. Write a program to print the first N even natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of 'n' to print 'n' even natural numbers in reverse order : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
        printf("%d ", 2 * i);
    return 0;
}