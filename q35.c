/*
program to display first n natural numbers, their sum, and their average using all the three
looping statements.
*/
#include<stdio.h>
void main(){
    int n,sum=0,i;
    printf("Enter the natural number upto which the sum is to calculated:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    i=1;
    sum=0;
    while(i<=n){
sum+=i;
i++;
    }
    sum=0;
    i=1;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("%d is the sum of natural number upto %d",sum,n);
}