// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
int main()
{
    char str_1[30], str_2[30];
    int i;
    printf("Enter any string to store it in str_1 and to copy it into str_2: ");
    fgets(str_1, 30, stdin);
    for (i = 0; str_1[i]; i++)
        str_2[i] = str_1[i];
    str_2[i] = '\0';
    printf("The string copied in str_2 is %s", str_2);
    return 0;
}