#include<stdio.h>
void main(){
    int n;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=(1/i);
    }
    printf("The sum of the harmonic series is %.2f",sum);
}