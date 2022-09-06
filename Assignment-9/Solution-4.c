/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("Enter the sides of a triangle\n");
    printf("Enter the first side : ");
    scanf("%d", &a);
    printf("Enter the second side : ");
    scanf("%d", &b);
    printf("Enter the third side : ");
    scanf("%d", &c);
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("Select the given options to check the respective options\n");
        printf("Enter 1 to check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("Enter 2 to check whether a given set of three numbers are lenghts of sides of a right angled triangle or not\n");
        printf("Enter 3 to check whether a given set of three numbers are sides of an equilateral triangle or not\n");
        printf("Enter 4 to Exit\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            if (a == b || b == c || c == a)
                printf("The given set of three numbers are lengths of an isosceles triangle");
            else
                printf("The given set of three numbers are not lengths of an isosceles triangle");
            break;
        case 2:
            if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
                printf("The given set of three numbers are lengths of sides of a right angled triangle");
            else
                printf("The given set of three numbers are not lengths of sides of a right angled triangle");
            break;
        case 3:
            if (a == b && b == c && c == a)
                printf("The given set of three numbers are sides of an equilateral triangle");
            else
                printf("The given set of three numbers are not sides of an equilateral triangle");
            break;
        case 4:
            break;
        default:
            printf("Not Allowed");
            break;
        }
    }
    else
    {
        printf("The triangle is not possible");
    }
}