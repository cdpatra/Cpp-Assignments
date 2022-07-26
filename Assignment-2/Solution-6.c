// 6. Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter any character to get its ASCII code : ");
    scanf("%c", &character);
    printf("The ASCII code of %c is %d", character, character);
    return 0;
}