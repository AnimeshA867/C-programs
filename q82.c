//Program to multiply two rectangular matrices and display the resultant matrix.
#include<stdio.h>
void main(){
    int r,c,m,n,A[10][10], B[10][10],prod[10][10];
    printf("Enter the row and column of matrix A:");
    scanf("%d %d",&r,&c);
    printf("Enter the row and column of matrix B:");
    scanf("%d %d",&m,&n);
    if(c!=m){
        printf("The matrix multiplication is not possible.");
    }else{
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("Enter the matrix A element:");
                scanf("%d",&A[i][j]);
            }
            
        }  
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("Enter the matrix B element:");
                scanf("%d",&B[i][j]);
            }
            
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<n;j++){
                prod[i][j]=0;
                for(int k=0;k<m;k++){
                    prod[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<n;j++){
                printf("%d\t",prod[i][j]);
            }
            printf("\n");
        }
    }
}