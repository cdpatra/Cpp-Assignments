// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include <stdio.h>
int main()
{
    int n, arr[n], i;
    printf("Enter the value of n to insert n numbers to display them in reverse order\n");
    scanf("%d", &n);
    printf("Now enter %d numbers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The reverse order of the input numbers is: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}