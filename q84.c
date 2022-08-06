//Program to add two 3x4 matrices and print the result in matrix form; use separate functions to take input and to add and display the result
#include<stdio.h>
void input(int *a,int i, int j){
    int b;
            printf("Enter the matrix element[%d%d]:",i+1,j+1);
            scanf("%d",&b);
      *a=b;

}
void add(int arr1, int arr2, int *sum){
   
           *sum=arr1+arr2;
   
}

void output(int arr1){
    
            printf("%d\t",arr1);
    
}
void main(){
    int a[3][4], b[3][4],sum[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            input(&a[i][j],i,j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            input(&b[i][j],i,j);
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            add(a[i][j],b[i][j],&sum[i][j]);
        }
    } 
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            output(sum[i][j]);
        }
        printf("\n");
    }
    
}