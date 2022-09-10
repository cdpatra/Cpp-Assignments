// 5. Write a program to convert a given string into lowercase.
#include <stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter any string to convert it into lowercase: ");
    fgets(str, 30, stdin);
    for (i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ' ';
    printf("The string in lowercase is %s", str);
}