#include<stdio.h>
void main(){
    int n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        sum+=i;
    }
    printf("The sum of the series is 1+ %dx^2",sum-1);
}