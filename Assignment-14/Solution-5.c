// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include <stdio.h>
int main()
{
    int arr[10], min;
    printf("Enter 10 numbers to find the smallest number among them\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    for (int i = 1; i < 10; i++)
        if (min > arr[i])
            min = arr[i];
    printf("The smallest number among the given numbers is %d", min);
    return 0;
}