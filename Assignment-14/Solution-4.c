// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include <stdio.h>
int main()
{
    int arr[10], max;
    printf("Enter any 10 numbers to find the greatest among them\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (int i = 1; i < 10; i++)
        if (max < arr[i])
            max = arr[i];
    printf("The greatest number among the 10 numbers is %d", max);
    return 0;
}