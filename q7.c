//Program to find area and circumference of circle.
#include<stdio.h>
#define PI 3.14
void main(){
    float r,circumference,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    circumference=2*PI*r;
    area=PI*r*r;
    printf("The circumference of the circle with radius %.2f is %.2f\n",r,circumference);
    printf("The area of the circle with radius %.2f is %.2f",r,area);
}