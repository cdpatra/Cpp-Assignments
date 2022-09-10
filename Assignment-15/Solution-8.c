// 8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
void print_unique(int arr[], int n);
int main()
{
    int n, arr[n];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("All unique elements in the given array are: ");
    print_unique(arr, n);
    return 0;
}
void print_unique(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        temp = 0;
        for (j = i; j < n - 1; j++)
        {
            if (arr[j] != arr[j + 1])
                break;
            temp++;
        }
        printf("%d ", arr[j]);
        i = i + temp;
    }
}