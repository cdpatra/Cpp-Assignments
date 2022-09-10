// 6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>
int IS_Alpha(char str[]);
int main()
{
    char str[30];
    printf("Enter any string to check whether it is an alphanumeric string or not: ");
    fgets(str, 30, stdin);
    printf(IS_Alpha(str) ? "Given string is Alphanumeric" : "Given string is not Alphanumeric");
    return 0;
}
int IS_Alpha(char str[])
{
    int i, flag_1 = 0, flag_2 = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            flag_1 = 1;
        else if (str[i] >= 'a' && str[i] <= 'z')
            flag_2 = 1;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            flag_2 = 1;
    }
    return (flag_1 == 1 && flag_2 == 1) ? 1 : 0;
}