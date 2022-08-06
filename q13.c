//13. Program to sum the digits of a positive integer which is 5 digits long.

#include<stdio.h>
void main(){
    int a,sum=0;
    printf("Enter any integer 5 digits long:");
    scanf("%5d",&a);
    int temp=a;
    do{
        sum+=a%10;
        a/=10;
    }while(a>0);
    printf("The sum of the 5 digit integer %d is %d",temp,sum);
}