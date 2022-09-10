// 3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
int main()
{
    int n, arr[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The sorted array is: ");
    sort(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
int sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}