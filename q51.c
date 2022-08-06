#include<stdio.h>
#include<math.h>
#define INPUT printf("Enter a number:")
float area(float x){
return (float)2*3.14*pow(x,2);
}
int sum(int n){
    if(n<=0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
void main(){
    int ch,n;
    printf("Enter your choice:\n1 to find area of circle\n2 TO check the given number is odd or even\n3 To find the sum of N numbers\nExit\n");
    scanf("%d",&ch);
    float r;
    switch (ch)
    {
    case 1:
        INPUT;
        scanf("%f",&r);
    printf("The area of the circle of radius %.2f is %.2f",r,area(r));
        break;

    case 2:
    INPUT;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even.");
    }else{
        printf("Odd.");
    }
    break;
    case 3: 
    INPUT;

    scanf("%d",&n);
    printf("The sum of %d numbers is %d",n,sum(n));
    
    default:
        break;
    }
}