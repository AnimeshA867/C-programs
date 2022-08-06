//Program to find factorial of a number.
#include<stdio.h>
int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
void main(){
     int n;
    printf("Enter an number:");
    scanf("%d",&n);
    if(n<0){
        printf("The factorial of a negative number does not exist.");
    }else{

    printf("The factorial of the number %d is %d",n,fact(n));
    }
}