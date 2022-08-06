//Program to express a length given in millimeters in meters, centimeters, and millimeters.
#include<stdio.h>
void main(){
    int length,meter,centimeter,millimeter;
    printf("Enter the length in millimeters:");
    scanf("%d",&length);
    meter=length/1000;
    centimeter=(length%1000)/10;
    millimeter=length%10;
    printf("The length in meters, centimeters, and millimeters is %d meters %d centimter and %d millimeter",meter,centimeter,millimeter);
}