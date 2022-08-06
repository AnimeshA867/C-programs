#include<stdio.h>
void main(){
    int p=0;
    for(int i=1;i<=100;i++){
        p=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                p++;
                break;
            }
        }
        if(p==0&&i!=2){
            printf("%d\t",i);
        }
    }
}