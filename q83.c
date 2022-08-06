//program to read n numbers in an array and display their sum and average; Use functions to read input and find sum and average.
#include<stdio.h>
void arr(int n,int *sum,int *average){
    int arr[n];
    for(int i=0;i<n;i++){

        printf("Enter the array elements:");
        scanf("%d",&arr[i]);
        *sum+=arr[i];


    }
    *average=*sum/n;
}
void main(){
    int sum,average,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    arr(n,&sum,&average);
    printf("The sum of the elements of the array is %d\n",sum);
    printf("The average of the elements of the array is %d",average);
}