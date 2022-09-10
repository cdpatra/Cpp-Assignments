// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
void display_reverse(int arr[], int n);
int main()
{
    int n, arr[n];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    display_reverse(arr, n);
    return 0;
}
void display_reverse(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}