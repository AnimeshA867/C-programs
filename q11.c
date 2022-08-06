//. Program to find the rupee equivalent of U.S. dollars.
#include<stdio.h>
void main(){
    float dollar,npr;
    printf("Enter the current value of dollar in Npr:");
    scanf("%f",&dollar);
    printf("Enter the rupees to convert in US Dollar:");
    scanf("%f",&npr);
    printf("The rupee quivalent of U.S. Dollar is %.2f",npr/dollar);
}