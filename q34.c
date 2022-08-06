#include<stdio.h>
void main(){
    char name[20];
    int i;
    printf("Enter your name:");
    scanf("%[A-Z a-z]",name);
    for(i=0;i<10;i++){
        printf("%s\t",name);
    }
    printf("\n");
    i=0;
    while(i<10){
        printf("%s\t",name);
        i++;
    }
    i=0;
    printf("\n");
    do{
        printf("%s\t",name);
        i++;
    }while(i<10);
}