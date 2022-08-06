//Program to calculate discount. If purchased amount is greater than or equal to 1000, discount is 5%.
#include<stdio.h>
void main(){
    float p,d,cp;
    printf("Enter the purchase amount:");
    scanf("%f",&p);
    if(p>=1000){
        d=0.05;
        
    }else{
        d=0.03;

    }
    cp=p-d*p;
    printf("Total cost price after discount is %.2f",cp);
}