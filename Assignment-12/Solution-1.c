// 1. Write a recursive function to print first N natural numbers.
#include <stdio.h>
void N_natural(int n);
int main()
{
    int n;
    printf("Enter the value of 'n' to print n natural numbers: ");
    scanf("%d", &n);
    N_natural(n);
}
void N_natural(int n)
{
    if (n == 1)
    {
        printf("1 ");
        return; // to return the control
    }
    N_natural(n - 1);
    printf("%d ", n);
}