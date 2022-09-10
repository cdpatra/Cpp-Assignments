// 7. Write a program to find second largest in an array.Take array values from the user.
#include <stdio.h>
int main()
{
    int arr[10], temp, i;
    printf("Enter any 10 numbers to find second largest number among them\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 8; i >= 0; i--)
        if (arr[i] < arr[9])
            break;

    printf("The second largest value among the given numbers is %d", arr[i]);
    return 0;
}