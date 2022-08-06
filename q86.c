/*
program to read n numbers in an array and display their sum and average. Use the concept
of pointer to access array elements.
*/
#include<stdio.h>

void main(){
    int a[10],sum1,average1;
    int *ptr =a;
    for(int i=0;i<10;i++){
       printf("Enter the array element:");
       scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        sum1+=*ptr;
        ptr++;
    }
    average1=sum1/10;
    printf("The sum of the elements of the array is %d\n",sum1);
    printf("The average of the elements of the array is %d",average1);
  

}