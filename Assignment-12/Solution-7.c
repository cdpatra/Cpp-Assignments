// 7. Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void N_square(int n);
int main()
{
    int n;
    printf("Enter the value of n to print squres of first n natural numbers: ");
    scanf("%d", &n);
    N_square(n);
    return 0;
}
void N_square(int n)
{
    if (n == 1)
    {
        printf("1 ");
        return;
    }
    N_square(n - 1);
    printf("%d ", n * n);
}