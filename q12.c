
//12. Program to print a six digit integer in reverse order.

#include<stdio.h>
void main(){
    int n,a=0;
    printf("Enter any number:");
    scanf("%6d",&n);
    do{
        a=a*10+n%10;
        n/=10;
    }while(n!=0);
    printf("The reversed number is: %d",a);
}