// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
void reverse(int n);
int main()
{
    int num;
    printf("Enter any number to print its reverse: ");
    scanf("%d", &num);
    reverse(num);
}
void reverse(int n)
{
    if (n == 0)
        return;
    printf("%d", n % 10);
    reverse(n / 10);
}