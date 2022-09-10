// 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void binary(int n);
int main()
{
    int num;
    printf("Enter and decimal number to print its binary equivalent: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}
void binary(int n)
{
    if (n <= 1)
    {
        printf("%d", n);
        return;
    }
    binary(n / 2);
    printf("%d", n % 2);
}