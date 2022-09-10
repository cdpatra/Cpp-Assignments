// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <string.h>
int main()
{
    char str_arr[5][30], temp_arr[30];
    int i, j;
    printf("Enter any 5 strings to arrange them in ascending order\n");
    for (i = 0; i < 5; i++)
    {
        fgets(str_arr[i], 30, stdin);
        str_arr[i][strlen(str_arr[i]) - 1] = '\0';
    }
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4 - i; j++)
            if (strcmp(str_arr[j], str_arr[j + 1]) == 1)
            {
                strcpy(temp_arr, str_arr[j]);
                strcpy(str_arr[j], str_arr[j + 1]);
                strcpy(str_arr[j + 1], temp_arr);
            }
    printf("Now the string array in ascending order is: ");
    for (i = 0; i < 5; i++)
        printf("%s ", str_arr[i]);
    return 0;
}