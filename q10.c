#include<stdio.h>
void main(){
    float poundOne=0.453592, kilo;
    printf("Enter the value of mass in kilogram:");
    scanf("%f",&kilo);
    printf("The value of mass in pound is: %.2f",kilo/poundOne);
}