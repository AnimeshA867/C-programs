//5. Program to find square root of a given number.
#include<stdio.h>
#include<math.h>
void main(){
     int n;
    float sqr;
    printf("Enter any positive integer to find square root:");
    scanf("%d",&n);
    if(n<0){
        printf("The number is in negative.");
    }else{

    sqr=pow(n,0.5);
    printf("The square root of %d is %.2f",n,sqr);
    }
}