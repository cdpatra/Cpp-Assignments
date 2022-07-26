// 6. Write a program to print greater between two numbers. Print one number of both are the same.
#include <stdio.h>
int main()
{
    int num_1, num_2;
    printf("Enter two numbers to print the greater number between them \n");
    scanf("%d%d", &num_1, &num_2);
    printf("The greater number is : ");
    if (num_1 > num_2)
        printf("%d", num_1);
    else
        printf("%d", num_2);
    return 0;
}