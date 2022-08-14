//Program to search an element in array using sequential search.
#include<stdio.h>
void main(){
    int key,n,flag=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search in array:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            flag++;
            printf("The element %d has been found.",key);
            break;
        }
    }
    if(flag==0){
        printf("The element %d ain't present in the array.");
    }
}