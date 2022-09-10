// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include <stdio.h>
int main()
{
    int arr[10], temp;
    printf("Enter and 10 number to sort them\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 9; i++)
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
    printf("The sorted numbers are : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}