// Program to sort numbers stored in an array using bubble sort in ascending order.
#include<stdio.h>
void main(){
    int arr[]={1,2,3,5,4,69,55,73,6,54};
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<l;j++){

    for(int i=0;i<l-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    for(int i=0;i<l;i++){
        printf("%d\t",arr[i]);
    }
}