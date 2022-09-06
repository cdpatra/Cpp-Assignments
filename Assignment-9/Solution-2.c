/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include <stdio.h>
int main()
{
    int a, b, operator;
    printf("Enter the operands\n");
    scanf("%d%d", &a, &b);
    printf("Enter the number accoring to the given options:\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Substraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Exit\n");
    scanf("%d", &operator);
    switch (operator)
    {
    case 1:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("%d x %d = %d", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d", a, b, a / b);
        break;
    default:
        printf("Invalid input");
        break;
    case 5:
        break;
    }
}