// 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
#include <string.h>
void check_repeat(char str[]);
int main()
{
    char str[30];
    printf("Enter any stirng to print the repeated character in it: ");
    fgets(str, 30, stdin);
    printf("Repeated character are:\n");
    check_repeat(str);
    return 0;
}
void check_repeat(char str[])
{
    int string_length = strlen(str), i, j, temp;
    for (i = 0; i < string_length - 1; i++)
        for (j = 0; j < string_length - i - 1; j++)
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
    for (i = 0; str[i]; i++)
        if (str[i] != str[i + 1] && str[i] == str[i - 1])
            printf("%c ", str[i]);
}