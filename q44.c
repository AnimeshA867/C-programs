//Given an integer, write a program to reverse and print it.
#include<stdio.h>
void main(){
    int a,rev=0;
    printf("Enter a number to reverse:");
    scanf("%d",&a);
    while(a!=0){
        rev=rev*10 + a%10;
        a/=10;
    }
    printf("The reversed number is %d",rev);
}