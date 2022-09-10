// 7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>
void duplicate(int arr[], int n);
int main()
{
    int n, arr[n];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    duplicate(arr, n);
    return 0;
}
void duplicate(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
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
        if (temp != 0)
        {
            printf("%d occured %d times\n", arr[j], temp + 1);
        }
        i = i + temp;
    }
}