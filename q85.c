//program to swap two numbers using a function and by passing arguments as references.
#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int a,b;
    printf("Enter any two numbers to swap places:");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n a:%d b:%d\n",a,b);
    swap(&a,&b);
    printf("After swapping:\n a:%d b:%d",a,b);
    }



