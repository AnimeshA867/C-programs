/*
program to display sum of the following series up to n terms.
Sum = x - x2 + x3- x4+....…
*/
#include<stdio.h>
#include<math.h>

void main(){
    int x,n;
    float sum;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the limit of the series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i-1)*pow(x,i);
    }
    printf("The sum of the series is %.2f",sum);
}