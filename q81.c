#include<stdio.h>
void main(){
    int a[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    printf("The original matrix is:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            a[i][j]=0;
        }
    }
    printf("The matrix after conversion to lower trangular matrix is \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
}
