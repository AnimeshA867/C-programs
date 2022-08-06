//Program to display all leap year starting from 1900 to 2000.
#include<stdio.h>
void main(){
    for(int i=1901;i<=2000;i++){
        if(i%4==0){
            printf("%d\t",i);
        }
    }
}