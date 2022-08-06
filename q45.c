// program that computes the sum of the digits of the given integer number.
#include<stdio.h>
void main(){
    int num,sum;
    printf("Enter any digits:");
    scanf("%d",&num);
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    printf("The sum of the digits of the given integers number is %d",sum);
}