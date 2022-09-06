// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any positive number to convert into negative number or vice versa\n");
    scanf("%d", &number);
    switch (number == 0)
    {
    case 1:
        printf("Zero is non-positive number");
        break;
    case 0:
        printf("%d", -1 * number);
        break;
    }
}