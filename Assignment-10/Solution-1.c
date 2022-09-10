// 1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
float area_of_circle(int r);
int main()
{
    int r;
    printf("Enter the radius of the circle to print the area of the circle: ");
    scanf("%d", &r);
    printf("The area of the circle is %.2f", area_of_circle(r));
    return 0;
}
float area_of_circle(int r)
{
    return 3.14 * r * r;
}