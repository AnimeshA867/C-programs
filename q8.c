//Program to find area and perimeter of a rectangle.
#include<stdio.h>
void main(){
    float l,b,area,perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The area of the rectangle is: %.2f\n",area);
    printf("The perimeter of the rectangle is: %.2f",perimeter);
}