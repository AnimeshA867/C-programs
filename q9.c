#include<stdio.h>
void main(){
    int n;
    float priceofN,priceOfDozen;
    printf("Enter the price of dozen mangoes:");
    scanf("%f",&priceOfDozen);
    printf("Enter the number of mangoes to find out price for:");
    scanf("%d",&n);
    priceofN=(priceOfDozen/12)*n;
    printf("The price of %d numbers of mangoes is %.2f",n,priceofN);
}