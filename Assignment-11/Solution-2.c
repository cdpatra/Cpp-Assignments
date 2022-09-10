// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int hcf(int num_1, int num_2);
int main()
{
    int i, num_1, num_2;
    printf("Enter any two number to calculate HCF of the given numbers\n");
    scanf("%d%d", &num_1, &num_2);
    if (num_2 > num_1)
    {
        int temp;
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    printf("The HCF of the given numbers is %d", hcf(num_1, num_2));
    return 0;
}
int hcf(int num_1, int num_2)
{
    int i, hcf = 1;
    for (i = 2; i <= num_1; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            hcf *= i;
            num_1 /= i;
            num_2 /= i;
            i--;
        }
    }
    return hcf;
}