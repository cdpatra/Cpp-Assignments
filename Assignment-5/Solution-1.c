// 1. Write a program to print MySirG N times on the screen
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of 'n' to print MySirG 'n' times : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("MySirG ");
    return 0;
}