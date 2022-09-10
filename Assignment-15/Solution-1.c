// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int greatest(int arr[], int n);
int main()
{
    int n, arr[n];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elemenst of array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The greatest number in the given array is %d", greatest(arr, n));
    return 0;
}
int greatest(int arr[], int n)
{
    int max;
    max = arr[0];
    for (int i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    return max;
}