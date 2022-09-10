// 4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
void rotate(int arr[], int n, int position, int direction);
int main()
{
    int n, arr[n], position, direction;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the value of n to rotate an array by n position: ");
    scanf("%d", &position);
    printf("Enter the direction by pressing -1 for left and 1 for right: ");
    scanf("%d", &direction);
    rotate(arr, n, position, direction);
    printf("The required array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
void rotate(int arr[], int n, int position, int direction)
{
    int temp;
    for (int i = 0; i < position; i++)
    {
        if (direction == -1)
        {
            temp = arr[0];
            for (int j = 0; j < n - 1; j++)
                arr[j] = arr[j + 1];
            arr[n - 1] = temp;
        }
        else if (direction == 1)
        {
            temp = arr[n - 1];
            for (int j = 0; j < n - 1; j++)
                arr[j + 1] = arr[j];
            arr[0] = temp;
        }
    }
}