/*
Admission to a professional course is subject to the following conditions:
a)Marks in math >= 60
b)Marks in physics >= 50
c)Marks in chemistry >= 40
d)Total in all three subjects >= 200
OR
Total in math and physics >=150
Write a program to process the applications to list eligible candidate. */
#include<stdio.h>
void main(){
    float math,physics,chemistry,total;
    printf("Enter the marks in Mathematics:");
    scanf("%f",&math);
     printf("Enter the marks in Physics:");
    scanf("%f",&physics);
     printf("Enter the marks in Chemistry:");
    scanf("%f",&chemistry);
    total=math+physics+chemistry;
    if(math>=60&&physics>=50&&chemistry>=40&&total>=200||(math+physics)>=150){
        printf("The candidate is eligible.");
    }else{
        printf("The candidate is not eligible.");
    }

}