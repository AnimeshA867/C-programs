/*
program to find out sum of all numbers completely divisible by 5 among n numbers given
by the user.
*/
#include<stdio.h>
void main(){
    int n;
    float sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        if(n%5==0){
            sum+=n;
        }
        n--;
    }
    printf("The sum of numbers divisible by 5 till %d is %.2f",temp,sum);
}