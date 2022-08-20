// 10. Write a program to print all Armstrong numbers under 1000.
#include <stdio.h>
int main()
{
    int num, temp_num, arm_num;
    for (num = 1; num <= 1000; num++)
    {
        arm_num = 0;
        temp_num = num;
        while (num != 0)
        {
            int rem = num % 10;
            arm_num = arm_num + rem * rem * rem;
            num = num / 10;
        }
        if (temp_num == arm_num)
            printf("%d ", temp_num);
        num = temp_num;
    }
    return 0;
}