// 9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int square(int n);
int main()
{
    int num;
    printf("Enter any number to calculate the square of the given number: ");
    scanf("%d", &num);
    printf("The square of %d is %d", num, square(num));
    return 0;
}
int square(int n)
{
    return n * n;
}