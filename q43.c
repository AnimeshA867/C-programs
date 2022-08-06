/*
program to find X of the following series for the given value of a and N.
X = a – a2 /2 + a3/3 – a4/4..................up to N.
*/
#include<stdio.h>
#include<math.h>
int series(int n,int a){
    // int b=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=pow(a,i)/i;
    }
    return sum;
}
void main(){
    int n,a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of n:");

    scanf("%d",&n);
    printf("The required sum is %d",series(n,a));

}