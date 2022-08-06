//Program to find power of a given number. Hint: pow(a,b), a and b are user inputs.
#include<stdio.h>
#include<math.h>
void main(){
    float n;
    int p;
    printf("Enter any number:");
    scanf("%f",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    float sq=pow(n,p);
    printf("%.2f is the %d power of %.2f",sq,p,n);
}
