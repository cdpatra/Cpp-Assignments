// 4. Write a program to convert a given string into uppercase.
#include <stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter any string to convert it into uppercase: ");
    fgets(str, 30, stdin);
    for (i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ' ';
    printf("The string in uppercase is %s", str);
}