/*
A cloth showroom has announced the following seasonal discounts on purchase of items
Purchase amount                       Discount

                            Mill cloth    Handloom items

0 – 100                        -           5%
101 – 200                       5%         7.5%
201 – 300                       7.5%        10%
Above 300                       10%        15%

Write a program using switch and if statements to compute the net amount to be paid by a
customer.
*/
#include<stdio.h>
void main(){
    float purchase,discountMill,discountHandloom;
    printf("Enter the purchase amount:");
    scanf("%f",&purchase);
    if(purchase<=100){
        discountMill=0;
        discountHandloom=0.05;
    }else if(purchase>100&&purchase<=200){
        discountMill=0.05;
        discountHandloom=0.075;
    }else if(purchase>200&&purchase<=300){
        discountMill=0.075;
        discountHandloom=0.1;
    }else{
        discountMill=0.1;
        discountHandloom=0.15;
    }
    printf("The cost if purchase is mill cloth is %.2f\n",purchase-discountMill*purchase);
    printf("The cost if purchase is handloom cloth is %.2f",purchase-discountHandloom*purchase);

}