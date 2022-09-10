// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
int IsPrime(int num);
int main()
{
    int num;
    printf("Enter any number to check whether it is Prime number or not: ");
    scanf("%d", &num);
    printf(IsPrime(num) ? "Prime Number" : "Not a Prime Number");
    return 0;
}
int IsPrime(int num)
{
    int i;
    if (num == 1)
        return 0;
    for (i = 2; i < num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}