// 10. Write a program to print a table of N.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of 'n' to print a table of 'n' : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}