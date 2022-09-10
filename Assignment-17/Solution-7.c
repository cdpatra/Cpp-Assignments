// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int i, count_alpha = 0, count_num = 0, count_spec = 0;
    printf("Enter any string to count the total number of alphabets, digits and special characters in the string: ");
    fgets(str, 30, stdin);
    str[strlen(str) - 1] = 0;
    for (i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            count_alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            count_num++;
        else
            count_spec++;
    printf("The total number of alphabets in the given string is %d\n", count_alpha);
    printf("The total number of numbers in the given string is %d\n", count_num);
    printf("The total number of special characters in the given string is %d\n", count_spec);
    return 0;
}