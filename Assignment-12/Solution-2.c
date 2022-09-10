// 2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void N_reverse(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the first n natural numbers in reverse order: ");
    scanf("%d", &n);
    N_reverse(n);
    return 0;
}
void N_reverse(int n)
{
    if (n == 1)
    {
        printf("1");
        return;
    }
    printf("%d ", n);
    N_reverse(n - 1);
}