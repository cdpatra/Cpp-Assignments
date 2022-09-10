// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
    char str[30], given_char, i, count = 0;
    printf("Enter any string: ");
    fgets(str, 30, stdin);
    printf("Enter any character to count the occurence of that character in the string: ");
    scanf("%c", &given_char);
    for (i = 0; str[i]; i++)
        if (str[i] == given_char)
            count++;
    printf("The occurence of %c in the given string is %d", given_char, count);
    return 0;
}