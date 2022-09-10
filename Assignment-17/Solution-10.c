// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int i, j, count, string_length;
    printf("Enter any string to find the frequency of characters: ");
    fgets(str, 30, stdin);
    string_length = strlen(str);
    string_length -= 1;
    str[string_length] = '\0';
    for (i = 0; i < string_length - 1; i++)
    {
        for (j = 0; j < string_length - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    for (i = 0; str[i]; i++)
    {
        count = 0;
        for (j = i; str[i]; j++)
        {
            count++;
            if (str[j] != str[j + 1])
                break;
        }
        printf("The frequency of %c is %d\n", str[i], count);
        i = i + count - 1;
    }
    return 0;
}