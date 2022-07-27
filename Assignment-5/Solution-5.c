// 5. Write a program to print the first N odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of 'n' to print 'n' odd natural numbers in reverse order : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
        printf("%d ", 2 * i - 1);
    return 0;
}