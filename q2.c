//Program to add, subtract, multiply, and divide two whole numbers.
#include<stdio.h>
#include<math.h>
void main(){
   unsigned int a,b;
//    float sum,subtract,multiply,division;
    printf("Enter any two number:");
    scanf("%u %u",&a,&b);
    printf("The sum of two whole numbers is: %d\n",(unsigned)a+b);
    printf("The difference of two whole numbers is: %d\n",(a-b));
    printf("The product of two whole numbers is: %d\n",a*b);
    printf("The division of two whole numbers is: %.2f\n",(float)a/b);
}
