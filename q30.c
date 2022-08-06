/*
Write a program using switch statement to display EXCELLENT, VERY GOOD, GOOD,
SATISFACTORY, or FAIL if the user enters A, B, C, D, or E respectively.
*/
#include<stdio.h>
// #include<string.h>
void main(){
    char grade;
    printf("Enter your respective grade:");
    scanf(" %[A-Z]",&grade);
    switch(grade){
        case 'A':
        printf("Excellent.");
        break; 
        case 'B':
        printf("Very Good.");
        break; 
        case 'C':
        printf("Good.");
        break; 
        case 'D':
        printf("Satisfactory.");
        break; 
        case 'E':
        printf("Fail.");
        break;
        default:
        printf("Invalid entry.");
        break;
    }
}