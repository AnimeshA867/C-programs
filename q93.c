//In a bank there are N customers with attributes name, account_no, and balance; write a
// program to find out who has the highest balance in the bank.
#include<stdio.h>
#include<stdlib.h>
struct cus{
    char name[30];
    float bal;
    long int acc_no;
}c[200];
void main(){
    int n;
    int max=-1234567897;
    int ac;
    printf("Enter the number of customers:");
    scanf("%d",&n);
    fflush(stdin);
    for(int i=0;i<n;i++){
        printf("Enter the  name of the customber:");
        gets(c[i].name);
        printf("Enter the balance:");

        scanf("%f",&c[i].bal);
        printf("Enter the account number:");
        scanf("%ld",&c[i].acc_no);
        fflush(stdin);
        if(c[i].bal>max){
            max=c[i].bal;
            ac=i;
        } 
           }
           printf("The account with highest balance is %ld",c[ac].acc_no);
}