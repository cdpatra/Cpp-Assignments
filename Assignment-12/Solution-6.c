// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void NEven_reverse(int n);
int main()
{
    int n;
    printf("Enter the value of n to print the first n even natural numbers in  reverse order: ");
    scanf("%d", &n);
    NEven_reverse(n);
    return 0;
}
void NEven_reverse(int n)
{
    if (n == 1)
    {
        printf("2");
        return;
    }
    printf("%d ", 2 * n);
    NEven_reverse(n - 1);
}