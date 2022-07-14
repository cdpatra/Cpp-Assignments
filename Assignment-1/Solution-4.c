//4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
#include <stdio.h>
int main()
{
    int radius;
    float area;
    printf("Enter the radius : ");
    scanf("%d", &radius);
    printf("Area of circle is %.2f having the radius %d", 3.14 * radius * radius, radius);
    return 0;
}