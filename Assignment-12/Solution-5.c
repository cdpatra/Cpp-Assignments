// 5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void NEven(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the first n even natural numbers: ");
    scanf("%d", &n);
    NEven(n);
}
void NEven(int n)
{
    if (n == 1)
    {
        printf("2 ");
        return;
    }
    NEven(n - 1);
    printf("%d ", 2 * n);
}