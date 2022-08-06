#include<stdio.h>
#include<math.h>
void main(){
    int n,x;
    float sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(int i=2;i<=n;i++){
        sum+=i;
    }
    printf("The sum of the series is %.2f",1+sum*pow(x,2));
}