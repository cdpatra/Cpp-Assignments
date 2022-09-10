// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void Prime(int a, int b);
int main()
{
    int a, b;
    printf("Enter two numbers to print all the prime numbers between those numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    Prime(a, b);
    return 0;
}
void Prime(int a, int b)
{
    int i, j;
    for (int i = a; i < b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
            printf("%d ", i);
    }
}
