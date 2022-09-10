// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include <stdio.h>
int main()
{
    int a[10], b[10], i;
    printf("Enter 10 number to store it in an array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    printf("The elements of copyed array are: ");
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    return 0;
}