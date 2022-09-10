// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int smallest(int arr[], int n);
int main()
{
    int n, arr[n];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elemenst of array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The smallest number in the given array is %d", smallest(arr, n));
    return 0;
}
int smallest(int arr[], int n)
{
    int min;
    min = arr[0];
    for (int i = 1; i < n; i++)
        if (min > arr[i])
            min = arr[i];
    return min;
}