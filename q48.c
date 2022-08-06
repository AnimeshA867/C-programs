//Program to obtain the first 25 fibonacci series.
#include<stdio.h>
void main(){
    int a=1,b=0,c=1;
    for(int i=1;i<=25;i++){
        printf("%d\t",c);
        c=a+b;
        b=a;
        a=c;
    }
}