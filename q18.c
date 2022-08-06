//Program to check whether a number is even or odd.
#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    (n%2==0)?printf("%d is even",n):printf("%d is odd",n);
}