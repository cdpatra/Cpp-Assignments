// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the length of the sides of a triangle to check whether the triangle is valid or not\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
        printf("The tirangle is valid");
    else
        printf("The tirangle is invalid");
    return 0;
}