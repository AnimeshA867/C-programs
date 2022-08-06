/*
Rates of tax on gross salary are as shown below:
23. Income Tax
Less than 10,000 Nill
Rs. 10,000 to 19,999 10%
Rs. 20,000 to 39,999 15%
Rs. 40,000 to above 20%
Write a program to compute the net salary after deducting the tax for the given information.
*/
#include<stdio.h>
void main(){
    float income,tax,netSal;
    printf("Enter the salary:");
    scanf("%f",&income);
    if(income<10000){
        tax=0;
    }else if(income>=10000&&income<20000){
        tax=0.1;
    }
    else if(income>=20000&&income<40000){
        tax=0.15;
    }
    else if(income>=40000){
        tax=0.20;
    }
    netSal=income-tax*income;
    printf("The net salary is %.2f",netSal);
}