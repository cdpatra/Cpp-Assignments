// 4. Write a program to calculate HCF of two numbers.
#include <stdio.h>
int main()
{
    int num_1, num_2, HCF = 1;
    printf("Enter any two numbers to calculate the HCF\n");
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
            HCF = HCF * i;
            num_1 = num_1 / i;
            num_2 = num_2 / i;
        }
    }
    printf("The HCF of given two numbers is %d", HCF);
    return 0;
}