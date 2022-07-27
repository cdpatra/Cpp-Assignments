// 5. Write a program to calculate sum of cubes of first N natural numbers.
#include <stdio.h>
int main()
{
    int i, n, sum_of_cubes = 0;
    printf("Enter the value of 'n' to calculate sum of cubes of first 'n' natural numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum_of_cubes = sum_of_cubes + i * i * i;
    printf("The sum of cubes of first %d natural numbers is %d", n, sum_of_cubes);
    return 0;
}