// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter any alphabet to check whether it is in uppercase or lowercase : ");
    scanf("%c", &chr);
    if (chr >= 'A' && chr <= 'Z')
        printf("The given character is in uppercase");
    else
        printf("The given character is in lowercase");
    return 0;
}