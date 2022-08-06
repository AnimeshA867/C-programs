//Program to find the roots of a quadratic equation using discriminant.
#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,root1,root2;
    printf("Enter the coefficient of a:");
    scanf("%f",&a);
    printf("Enter the coefficient of b:");
    scanf("%f",&b);
    printf("Enter the coefficient of c:");
    scanf("%f",&c);
    d=pow(b,2)-4*a*c;
    if(d<0){
        printf("The root is imaginary.");
    }
    else if(d==0){
        root1=(-b)/2*a;
        root2=root1;
        printf("The root of the equation is %.2f",root1);
    }
    else if(d>0){
        root1=((-b)+pow(d,0.5))/2*a;
        root1=((-b)-pow(d,0.5))/2*a;
                printf("The roots of the equation are %.2f, %.2f",root1,root2);

    }
    
}