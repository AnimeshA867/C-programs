/*
Given marks in five subjects. Write a program (a) to display “PASS” or “FAIL” if assumed
pass marks is 45 in each subject, (b) to find percentage of marks obtained, and (c) to find
division for “PASS” students assuming that 80% and above for “DISTINCTION”, 60% and
above for “FIRST DIVISION” otherwise “SECOND DIVISION”.
*/
#include<stdio.h>
void main(){
    int marks[5],con=1;
    float percent,total=0;
    for(int i=1;i<=5;i++){
        printf("Enter the marks of subject %d:",i);
        scanf("%d",&marks[i-1]);
    }
    for(int i=0;i<5;i++){
        if(marks[i]<45){
            printf("Fail");
            con=0;
            break;
        }
    }
     if(con!=0){
             for(int i=0;i<5;i++){
            total+=marks[i];
        }
         percent=total/5;
         printf("The obtained percent tage is %.2f\n",percent);
    if(percent>80){
        printf("Distinction");
    }else if(percent>60){
        printf("First Division.");
    }else{
        printf("Second Division");
    }


    }
   

}