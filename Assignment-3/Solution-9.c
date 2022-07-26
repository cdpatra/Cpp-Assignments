// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int num_1, num_2, num_3;
    printf("Enter any three numbers to get the greatest number (if the number appears two or three times the number will print once)\n");
    scanf("%d%d%d", &num_1, &num_2, &num_3);
    printf("The greatest number is : ");
    if (num_1 > num_2)
    {
        if (num_1 > num_3)
            printf("%d", num_1);
        else
            printf("%d", num_3);
    }
    else
    {
        if (num_2 > num_3)
            printf("%d", num_2);
        else
            printf("%d", num_3);
    }
    return 0;
}