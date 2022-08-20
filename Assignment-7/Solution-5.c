// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int num_1, num_2;
    printf("Enter any two numbers to check whether numbers are co-primes numbers or not\n");
    scanf("%d%d", &num_1, &num_2);
    if (num_1 > num_2)
    {
        int temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    for (int i = 2; i <= num_1; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            printf("The given two numbers are not co-prime numbers");
            return 0;
        }
    }
    printf("The given two numbers are co-prime numbers");
    return 0;
}