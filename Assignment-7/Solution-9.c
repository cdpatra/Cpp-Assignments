// 9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{
    int num, num_temp, arm_num = 0;
    printf("Enter any number to check whether it is an Armstrong number or not : ");
    scanf("%d", &num);
    num_temp = num;
    while (num != 0)
    {
        arm_num = arm_num + (num % 10) * (num % 10) * (num % 10);
        num = num / 10;
    }
    if (num_temp == arm_num)
        printf("The given number is an Armstrong Number");
    else
        printf("The given number is not an Armstrong Number");
    return 0;
}