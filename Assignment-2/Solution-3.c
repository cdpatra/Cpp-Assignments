// 3. Write a program to swap values of two int variables.
#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter 2 numbers to be swaped\n");
    printf("num1 = ");
    scanf("%d", &num1);
    printf("num2 = ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The swapped values of num1 = %d and num2 = %d", num1, num2);
    return 0;
}