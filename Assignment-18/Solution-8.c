// 8. Write a function to count words in a given string.
#include <stdio.h>
int count_words(char str[50]);
int main()
{
    char str[50];
    printf("Enter a string to count words present in it: ");
    fgets(str, 50, stdin);
    printf("Total number of words present in the given stirng is %d", count_words(str));
    return 0;
}
int count_words(char str[50])
{
    int count = 1;
    for (int i = 0; str[i]; i++)
        if (str[i] == ' ')
            count++;
    return count;
}