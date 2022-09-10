// 2. Write a function to reverse a string.
#include <stdio.h>
#include <string.h>
void reverse(char str[]);
int main()
{
    char str[30];
    printf("Enter any string to reverse it: ");
    fgets(str, 30, stdin);
    str[strlen(str) - 1] = '\0';
    printf("The reverse of the given string is: ");
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    int i = strlen(str) - 1;
    for (i; i >= 0; i--)
        printf("%c", str[i]);
}