// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    float cost_price, selling_price;
    printf("Enter cost price and selling price respectively to calculate the profit or loss percentage \n");
    scanf("%f%f", &cost_price, &selling_price);
    if (selling_price > cost_price)
        printf("Profit is %.2f%%", (selling_price - cost_price) / cost_price * 100);
    else
        printf("Loss is %.2lllf%%", (cost_price - selling_price) / cost_price * 100);
    return 0;
}