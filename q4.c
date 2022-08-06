//. Program to convert a temperature given in Celsius to Fahrenheit.
#include<stdio.h>
void main(){
    float cel,fahr;
    printf("Enter the temperature in celcius:");
    scanf("%f",&cel);
    fahr=(cel*1.8)+32;
    printf("The temperature in fahrenheit is %.2f",fahr);
}