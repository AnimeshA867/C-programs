//Program to display your name using characters
#include<stdio.h>
void main(){
    char name[500];
    printf("Enter your name:");
    gets(name);
    printf("Your name is %s",name);
}