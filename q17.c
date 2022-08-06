/* Program to calculate discount
a) If purchased amount is greater than or equal to 5000, discount is 10%
b) If purchased amount is greater than or equal to 4000 and less than 5000, discount is 7%
c) If purchased amount is greater than or equal to 3000 and less than 4000, discount is 5%
d) If purchased amount is greater than or equal to 2000 and less than 3000, discount is 3%
e) If purchased amount is less than 2000, discount is 2%
*/
#include <stdio.h>
void main()
{
    float price, discount, costPrice;
    printf("Enter the purchased Amount:");
    scanf("%f", &price);
    if (price < 2000)
    {
        discount = 0.02;
    }
    else if (price >= 2000 && price < 3000)
    {
        discount = 0.03;
    }
    else if (price >= 3000 && price < 4000)
    {
        discount = 0.05;
    }
    else if (price >= 4000 && price < 5000)
    {
        discount = 0.07;
    }
    else if (price >= 5000)
    {
        discount = 0.1;
    }
    costPrice = price - discount * price;
    printf("The final cost price after discount is %.2f", costPrice);
}