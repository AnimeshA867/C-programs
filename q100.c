/*
write a program that creates a file named “employee.dat” to keep the records of N
employees of a company and print the records in the ascending order of the employee_id. A
typical employee record will be employee id, name, designation, and salary*/
#include<stdio.h>
#include<stdlib.h>

struct employee{
    int eid;
    char name[30],designation[30];
    float salary;

};
void main(){
    FILE *fp;
    fp=fopen("employee.dat","w");
    int n;
    printf("Enter the number of employees to record:");
    scanf("%d",&n);
    struct employee emp[n],temp;
    for(int i=0;i<n;i++){
        fflush(stdin);
        printf("Enter the name of the employee:");
        gets(emp[i].name);
        printf("Enter the designation of the employee:");
        gets(emp[i].designation);
        printf("Enter the salary of the employee:");
        scanf("%f",&emp[i].salary);
        printf("Enter the employee id:");
        scanf("%d",&emp[i].eid);
        
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(emp[i].eid>emp[j].eid){
                temp=emp[i];
                emp[i]=emp[j];
                emp[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        fprintf(fp,"%s\t %s\t %.2f\t %d\n",emp[i].name,emp[i].designation,emp[i].salary,emp[i].eid);
    }
}