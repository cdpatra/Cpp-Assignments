// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include <stdio.h>
int first(int arr[], int n);
int main()
{
    int arr[10];
    printf("Enter any 10 numbers\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("The first occurrence of adjacent duplicate values in the array is %d", first(arr, 10));
    return 0;
}
int first(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
}