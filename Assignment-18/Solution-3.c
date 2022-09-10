#include <stdio.h>
#include <string.h>
void string_compare(char str_1[], char str_2[]);
int main()
{
    char str_1[30], str_2[30];
    printf("Enter any two strings to compare them\n");
    printf("Enter the first string: ");
    fgets(str_1, 30, stdin);
    str_1[strlen(str_1) - 1] = '\0';
    printf("Enter the second string: ");
    fflush(stdin);
    fgets(str_2, 30, stdin);
    str_2[strlen(str_2) - 1] = '\0';
    string_compare(str_1, str_2);
    return 0;
}
void string_compare(char str_1[], char str_2[])
{
    int i;
    for (i = 0; i <= 30; i++)
    {
        if (str_1[i] < str_2[i])
            return printf("The given strings are in dictionary order");
        else if (str_1[i] > str_2[i])
            return printf("The given strings are not in dictionary order");
    }
    return printf("Both the strings are equal");
}