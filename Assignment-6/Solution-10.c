// 10. Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to print its reverse : ");
    scanf("%d", &num);
    printf("The reverse of the given number is ");
    while (num != 0)
    {
        printf("%d", num % 10);
        num = num / 10;
    }
    return 0;
}