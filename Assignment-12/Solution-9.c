// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void octal(int n);
int main()
{
    int num;
    printf("Enter and decimal number to print its octal equivalent: ");
    scanf("%d", &num);
    octal(num);
    return 0;
}
void octal(int n)
{
    if (n <= 7)
    {
        printf("%d", n);
        return;
    }
    octal(n / 8);
    printf("%d", n % 8);
}