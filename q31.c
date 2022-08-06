//program to display number of days in a month using switch statement.
#include<stdio.h>
#include<string.h>
void main(){
    int month;
    printf("Enter the month's number: \n i.e. For january, press 1\n");
    scanf("%d",&month);
    // strlwr(month);
    switch (month)
    {
    case 1:
      printf("There are 31 days in the month of January.");
        break;
     case 2:
      printf("There are 28 days or 29 in leap years in the month of February.");
        break;
     case 3:
      printf("There are 31 days in the month of March.");
        break;
     case 4:
      printf("There are 30 days in the month of April.");
        break;
     case 5:
      printf("There are 31 days in the month of May.");
        break;
     case 6:
      printf("There are 30 days in the month of June.");
        break;
     case 7:
      printf("There are 31 days in the month of July.");
        break;
     case 8:
      printf("There are 31 days in the month of August.");
        break;
     case 9:
      printf("There are 30 days in the month of September.");
        break;
     case 10:
      printf("There are 31 days in the month of October.");
        break;
     case 11:
      printf("There are 30 days in the month of November.");
        break;
     case 12:
      printf("There are 31 days in the month of December.");
        break;
    
    default:
    printf("Invalid entry.");
        break;
    }
}