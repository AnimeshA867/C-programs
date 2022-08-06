#include<stdio.h>
long fact(int n){
    if(n==1||n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
void main(){
    int n;
    double sum;
    printf("Enter the value of n(upto 25):");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=(i/fact(i));
    }
    printf("The sum of the sequence is %.2lf",sum);
}