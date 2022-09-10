// 7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
#include <string.h>
int IS_palindrome(char str[]);
int main()
{
    char str[30];
    printf("Enter any string to check whethr it is pallindrome or not: ");
    fgets(str, 30, stdin);
    str[strlen(str) - 1] = '\0';
    printf(IS_palindrome(str) ? "The given string is palindrome" : "The given string is not palindrome");
    return 0;
}
int IS_palindrome(char str[])
{
    char rev[30];
    int i;
    for (i = 0; str[i]; i++)
        rev[strlen(str) - 1 - i] = str[i];
    rev[i] = '\0';
    for (i = 0; str[i]; i++)
        if (str[i] != rev[i])
            return 0;
    return 1;
}