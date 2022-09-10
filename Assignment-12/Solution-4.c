// 4. Write a recursive function to print first N odd natural numbers in reverse order.
#include <stdio.h>
void N_Odd_reverse(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the first n odd natural numbers in reverse order: ");
    scanf("%d", &n);
    N_Odd_reverse(n);
}
void N_Odd_reverse(int n)
{
    if (n == 1)
    {
        printf("1");
        return;
    }
    printf("%d ", 2 * n - 1);
    N_Odd_reverse(n - 1);
}