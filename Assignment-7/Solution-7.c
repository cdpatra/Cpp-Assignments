// 7. Write a program to print all Prime numbers between two given numbers.
#include <stdio.h>
int main()
{
    int i, j, num_1, num_2;
    printf("Enter two numbers to print all Prime numbers between two given numbers\n");
    scanf("%d%d", &num_1, &num_2);
    if (num_1 > num_2)
    {
        int temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    for (i = num_1; i <= num_2; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > i / 2)
            printf("%d ", i);
    }
    return 0;
}