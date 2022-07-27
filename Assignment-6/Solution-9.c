// 9. Write a program to calculate LCM of two numbers.
#include <stdio.h>
int main()
{
    int i, j, HCF, num_1, num_2;
    printf("Enter two numbers to calculate LCM of them\n");
    scanf("%d%d", &num_1, &num_2);
    int product = num_1 * num_2;
    if (num_1 > num_2)
    {
        int temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    for (i = 2, HCF = 1; i <= num_1; i++)
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            HCF = HCF * i;
            num_1 = num_1 / i;
            num_2 = num_2 / i;
        }
    printf("LCM of given two number is %d", product / HCF);
    return 0;
}