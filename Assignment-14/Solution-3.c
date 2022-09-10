// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int arr[10], sum_E = 0, sum_O = 0;
    printf("Enter 10 numbers to print the sum of all odd numbers and sum of all even numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2)
            sum_O += arr[i];
        else
            sum_E += arr[i];
    }
    printf("The sum of Odd numbers is : %d\n", sum_O);
    printf("The sum of Even numbers is : %d\n", sum_E);
    return 0;
}