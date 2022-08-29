/*
write a program to open a file named “student.txt” to keep the records of students (roll_no,
name, course, and semester) in a write mode and perform the following operations:
a. Insert records in to the file.
b. Display all those records for which course is B.Sc. IT and semester is 2.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int roll,sem;
    char name[30],course[30];
};
void main(){
    int n;
    FILE *fp;
    fp=fopen("student.txt","r+");
    if(fp==NULL){
        printf("Error openning the file.");
        exit(1);
    }else{
        struct student s[100];
        printf("Enter the number of students to keep record for:");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            fflush(stdin);
            printf("Enter the name of the student:");
            gets(s[i].name);
            printf("Enter the course of the student:");
            gets(s[i].course);
            printf("Enter the roll no. of the student:");
            scanf("%d",&s[i].roll);
            printf("Enter the number of semester:");
            scanf("%d",&s[i].sem);
            fprintf(fp,"%s\t%s\t%d\t%d\n",s[i].name,s[i].course,s[i].roll,s[i].sem);
        }
        printf("Students with B.Sc. It as their course with sem 2\n");
        for(int i=0;i<n;i++){
                        if(s[i].sem==2&&strcmp(strlwr(s[i].course),"b.sc. it")==0){

            printf("%s\t %s\t %d\t %d\n",s[i].name,s[i].course,s[i].roll,s[i].sem);
                        }
        }

    }
}