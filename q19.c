/*Program to calculate the simple interest.
a) If balance is greater than 99999, interest is 7 %.
b) If balance is greater than or equal to 50000 and less than 100000interest is 5 %.
c) If balance is less than 50000, interest is 3%.
*/
#include<stdio.h>
void main(){
    float p,t,r;
    printf("Enter the principle:");
    scanf("%f",&p);   
    printf("Enter the time:");
    scanf("%f",&t);   
    if(p>99999){
        r=0.07;
    }
    else if(p>=50000&&p<100000){
    r=0.05;
    }
    else{
        r=0.03;
    }
    float si=p*t*r;
    printf("The simple interest is %.2f",si);
}