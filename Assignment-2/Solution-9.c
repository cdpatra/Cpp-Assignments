// 9. Write a program to print size of an int, a float, a char and a double type variable.
#include <stdio.h>
int main()
{
    printf("The size of an \"int\" variable is %d\nThe size of a \"float\" variable is %d\nThe size of a \"char\" variable is %d\nThe size of a \"double\" variable is %d", sizeof(int), sizeof(float), sizeof(char), sizeof(double));
    return 0;
}