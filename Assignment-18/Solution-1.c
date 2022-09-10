// 1. Write a function to calculate length of the string.
#include <stdio.h>
int string_len(char str[]);
int main()
{
    char str[30];
    printf("Enter any string to calculate its length: ");
    fgets(str, 30, stdin);
    printf("The length of the given string is %d", string_len(str));
    return 0;
}
int string_len(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    return i - 1;
}