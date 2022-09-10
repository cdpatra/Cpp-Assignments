// 3. Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void NOdd(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the first n odd natural numbers: ");
    scanf("%d", &n);
    NOdd(n);
}
void NOdd(int n)
{
    if (n == 1)
    {
        printf("1 ");
        return;
    }
    NOdd(n - 1);
    printf("%d ", 2 * n - 1);
}