// 6. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int i, string_length;
    printf("Enter any string to reverse it: ");
    fgets(str, 30, stdin);
    string_length = strlen(str);
    str[string_length - 1] = '\0';
    printf("The reverse of the given string is: ");
    for (i = string_length - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}