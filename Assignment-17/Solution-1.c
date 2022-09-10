// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter any string: ");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
        ;
    printf("The length of the given string is %d", i - 1); // here 1 is subtracted in i as fgets takes \n as a character.
    return 0;
}