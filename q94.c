/*
program using structure data to read name, roll, marks in three subjects of 20 students and
print the record in the ascending order of the total marks obtained in three subjects.
*/
#include<stdio.h>
#include<stdlib.h>
struct Student {
    char name[30];
    int rollNumber;
    float marks[3];
    float totalMarks;
};

    void  sortArrayInAscendingOrderMark(struct Student students[],int numberStudents){
	int i,j,m;
	for (i = 0; i < numberStudents - 1; i++){
		for (j = 0; j < numberStudents - i - 1; j++){
			if (students[j].totalMarks > students[j + 1].totalMarks)
			{
				// swap temp and elements[i]
				struct Student temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
		}
	}
	printf("Name:\t Roll no.\t Marks\t\t\t Total marks:\n");
	for(i=0;i<numberStudents;i++){
		printf("%s\t %d\t",students[i].name,students[i].rollNumber);
		for(m=0;m<3;m++){
			printf("\t%.2f",students[i].marks[m]);
		}
		printf("\t%.2f\n",students[i].totalMarks);
	}
    }
void main(){
    struct Student S[20];
    int n=2;
    for(int i=0;i<n;i++){
        printf("Enter the name:");
        gets(S[i].name);
        printf("Enter the roll no. of the students:");
        scanf("%d",&S[i].rollNumber);
        S[i].totalMarks=0;
        for(int j=0;j<3;j++){
            printf("Enter the marks in subject %d:\t",j+1);
            scanf("%f",&S[i].marks[j]);
            S[i].totalMarks+=S[i].marks[j];
        }
        fflush(stdin);
    }
    sortArrayInAscendingOrderMark(S,n);

}