// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void NPrime(int n);
int main()
{
    int num;
    printf("Enter the value of 'n' to print first n prime numbers: ");
    scanf("%d", &num);
    NPrime(num);
    return 0;
}
void NPrime(int n)
{
    int i, j;
    for (i = 2; n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            printf("%d ", i);
            n--;
        }
    }
}