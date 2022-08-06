/*A leap year should meet the following condition:
a) For non-century years it should be exactly divisible by 4.
b) For century years it should be exactly divisible 400.
Write a program to check a year for leap. */

#include<stdio.h>
void main(){
    int year;
    printf("Enter the year to check if the year is leap or not: ");
    scanf("%d",&year);
    if(year%100==0&&year%400==0||year%100!=0&&year%4==0){
        printf("%d is a leap year.",year);
    }else{
        printf("%d is not a leap year.",year);
    }
}