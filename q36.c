/*
program that displays the temperatures from 0 degrees Celsius to 100 degrees Celsius and
their Fahrenheit equivalent.
*/
#include<stdio.h>
void main(){
    int celcius;
    float farhenheit;
    for(celcius=0;celcius<=100;celcius++){
        printf("%d C ->%.2f F\n",celcius,celcius*1.8+32);
    }
}