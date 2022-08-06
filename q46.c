//given an integer, write a program to check it for palindrome.
#include<stdio.h>
void main(){
    int num,rev=0;
    printf("Enter any integer to check for palindrome:");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    if(temp==rev){
        printf("The number %d is a palindrome.",temp);
    }else{
                printf("The number %d is not a palindrome.",temp);

    }
}