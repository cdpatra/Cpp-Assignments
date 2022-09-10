// 3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
    char str[30];
    int i, count = 0;
    printf("Enter any string to count the number of vowels present in it: ");
    fgets(str, 30, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    printf("The total number of vowels in the given string is %d", count);
    return 0;
}