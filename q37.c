/*
program to calcualte the sum of first 10 even number.]
*/
#include<stdio.h>
void main(){
    int n,sum=0;
    for(n=0;n<10;n++){
        sum+=2*n;
    }
    printf("The sum of first 10 even numbers is %d",sum);
}