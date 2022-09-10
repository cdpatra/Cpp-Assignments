// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include <stdio.h>
int IsEven(int num);
int main()
{
    int num;
    printf("Enter any number to check whether it is even or odd: ");
    scanf("%d", &num);
    printf(IsEven(num) ? "Even" : "Odd");
    return 0;
}
int IsEven(int num)
{
    return num % 2 ? 0 : 1;
}