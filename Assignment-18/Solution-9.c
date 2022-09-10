// 9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include <stdio.h>
#include <string.h>
void reverse_word_wise(char str[]);
int main()
{
    char str[50];
    printf("Enter any string to reverse it word wise: ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    reverse_word_wise(str);
    printf("The string reversed word wise is: \n%s", str);
    return 0;
}
void reverse_word_wise(char str[])
{
    int i, j, initial_index_of_word = 0, temp;
    for (i = 0;; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            for (j = 0; j < (i - initial_index_of_word) / 2; j++)
            {
                temp = str[initial_index_of_word + j];
                str[initial_index_of_word + j] = str[i - j - 1];
                str[i - j - 1] = temp;
            }
            if (str[i] == '\0')
                break;
            initial_index_of_word = i + 1;
        }
    }
    strrev(str);
}