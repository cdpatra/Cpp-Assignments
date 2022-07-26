// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include <stdio.h>
int main()
{
    int a, b, c, D;
    printf("Enter coefficient (i.e a,b,c) of any quardratic equation in the form ax^2+bx+c \n");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0)
        printf("The roots are real and distinct");
    else if (D == 0)
        printf("The roots are real and equal");
    else
        printf("The roots are imaginary");
    return 0;
}