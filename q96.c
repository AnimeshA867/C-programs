/*
create a file named “university.dat”. Write a program to keep the records on N colleges
under Pokhara University if a file. These records contain name, location, and
no_of_faculties of the college and display the names of colleges in Kathmandu location.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct university{
    char name[30];
    char location[30];
    int fac;
};
void main(){
    int n;
    FILE *fp;
    fp=fopen("university.dat","w");
    printf("Enter the number of colleges under Pokhara University:");
    scanf("%d",&n);
    struct university u[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        printf("Enter the name of the college:");
        gets(u[i].name);
        printf("Enter the location of the college:");
        gets(u[i].location);
        printf("Enter the number of faculties of the college:");
        scanf("%d",&u[i].fac);
        fprintf(fp,"%s\t %s\t %d\n",u[i].name,u[i].location,u[i].fac);
    strlwr(u[i].location);
    }
    printf("The list of colleges in kathmandu within Pokhara University are:\n");
    for(int i=0;i<n;i++){
        if(strcmp(u[i].location,"kathmandu")==0){
            printf("%s\t %s\t %d\n",u[i].name,u[i].location,u[i].fac);
        }
    }
}