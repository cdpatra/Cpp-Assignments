// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
void merge_sort(int arr_1[], int arr_2[], int n);
int main()
{
    int i, n, arr_1[n], arr_2[n];
    printf("Enter the size of two arrays: ");
    scanf("%d", &n);
    printf("Enter the element of first array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr_1[i]);
    printf("Enter the element of second array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr_2[i]);
    printf("The merged array in descending order is : ");
    merge_sort(arr_1, arr_2, n);
    return 0;
}
void merge_sort(int arr_1[], int arr_2[], int n)
{
    int arr[2 * n], i, j, temp;
    for (i = 0; i < n; i++)
    {
        arr[i] = arr_1[i];
        arr[n + i] = arr_2[i];
    }
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 2 * n; i++)
        printf("%d ", arr[i]);
}