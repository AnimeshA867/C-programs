//Program to read name list of 50 students and display them in alphabetical form.
#include<stdio.h>
#include<string.h>
#define M 10
void main(){
    char name[50][50];
    char temp[100];
    for(int i=0;i<M;i++){
        printf("Enter the name of the students:");
        gets(name[i]);
    }
    for(int i=0;i<M-1;i++){
        for(int j=i+1;j<M;j++){
       
                if(strcmp(name[i],name[j])>0){
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],temp);
                }
            
        }
    }
    for(int i=0;i<M;i++){
        printf("%s\n",name[i]);
    }
}