// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, percentage;
    printf("Enter the marks of 5 subjects\n");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    percentage = (m1 + m2 + m3 + m4 + m5) / 500 * 100;
    if (percentage < 33)
        printf("FAILED with percentage of %.2f%%", percentage);
    else
        printf("PASSED with percentage of %.2f%%", percentage);
    return 0;
}