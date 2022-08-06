//Program to find greater number between two numbers using function.
#include<stdio.h>
int greater(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
void main(){
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    printf("The greater number among two %d and %d is %d",a,b,greater(a,b));
}