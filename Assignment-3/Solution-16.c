// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter any character to check whether it is an alphabet (uppercase), an alphabet (lowercase), a digit or a special character.\n");
    scanf("%c", &chr);
    if (chr >= 'A' && chr <= 'Z')
        printf("Alphabet (Upper Case)");
    else if (chr >= 'a' && chr <= 'z')
        printf("Alphabet (Lower Case)");
    else if (chr >= '0' && chr <= '9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}