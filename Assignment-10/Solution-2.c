// 2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
int main()
{
    float p, r, t;
    printf("Enter principle , rate and time respectively to print the simple intrest\n");
    scanf("%f%f%f", &p, &r, &t);
    printf("The simple intrest is %.2f", simple_intrest(p, r, t));
    return 0;
}
float simple_intrest(float p, float r, float t)
{
    return p * r * t / 100;
}