/*
create a file named “employee.dat”. Write a program to store records of N employee in a
file. These records contain name, identification number, office name, and occupation of the
employee. Also display name of those employees whose office name is “Everest Bank” and
occupation is “manager”.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
    char name[30];
    int id;
    char oname[30];
    char occupation[40];
};
void main(){
    FILE *fp;
    fp=fopen("employee.dat","w");
    int n;
    printf("Enter the number of employee:");
    scanf("%d",&n);
    struct employee emp[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        printf("Enter the name of employee:");
        gets(emp[i].name);
        printf("Enter the office name of the employee:");
        gets(emp[i].oname);
        printf("Enter the occupation of the employee:");
        gets(emp[i].occupation);
        printf("Enter the identification number of the employee:");
        scanf("%d",&emp[i].id);
        fprintf(fp,"%s\t %d\t %s\t %s\n",emp[i].name,emp[i].id,emp[i].oname,emp[i].occupation);
        strlwr(emp[i].occupation);
        strupr(emp[i].oname);
    }
    printf("The employee with office name\"Everest Bank\" and occupation manager are:\n ");
    for(int i=0;i<n;i++){
        if(strcmp(emp[i].occupation,"manager")==0&&strcmp(emp[i].oname,"EVEREST BANK")==0){
            printf("%s\n",emp[i].name);
        }
    }
}