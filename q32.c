/*
Write a program using switch statement to develop a simple calculator for +, -, *, /, and %
operators.
*/
#include<stdio.h>
#include<math.h>
void main(){
    char op;
    float a,b,sum,diff,multiply,divide,percent;
    printf("Enter an operator: \"+,-,*,/,%%\"\t");
    op=getchar();
     printf("Enter any two numbers:");
        scanf("%f %f",&a,&b);
    switch(op){
        case '+':
    sum=a+b;
    printf("%.2f",sum);
        break;

        case '-':
       diff=abs(a-b);
           printf("%.2f",diff);

        break;
        case '*':
        multiply=a*b;
            printf("%.2f",multiply);

        break;
        case '/':
        divide=a/b;
            printf("%.2f",divide);

        break;
        case '%':
        percent=(0.01*a)*b;
            printf("%.2f",percent);

        break;
        default:
        printf("Invalid entry.");
    }
}