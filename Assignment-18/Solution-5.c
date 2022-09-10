// 5. Write a function to transform a string into lowercase.
#include <stdio.h>
void Lower_case(char str[]);
int main()
{
    char str[30];
    printf("Enter any string to fransform it into lowercase: ");
    fgets(str, 30, stdin);
    Lower_case(str);
    return 0;
}
void Lower_case(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ' ';
        printf("%c", str[i]);
    }
}