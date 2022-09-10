// 4. Write a function to transform string into uppercase
#include <stdio.h>
void Upper_case(char str[]);
int main()
{
    char str[30];
    printf("Enter any string to fransform it into uppercase: ");
    fgets(str, 30, stdin);
    Upper_case(str);
    return 0;
}
void Upper_case(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ' ';
        printf("%c", str[i]);
    }
}