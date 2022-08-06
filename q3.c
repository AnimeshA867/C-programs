//3. Program to find simple interest.
#include<stdio.h>
void main(){
    float p,t,r,si;
    printf("Enter principal, time and rate respectively:");
    scanf("%f %f %f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("The simple interest of the given amount is %.2f",si);
}