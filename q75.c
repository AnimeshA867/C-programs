#include<stdio.h>
#include<string.h>
void main(){
    char str1[500];
    int sm=0;
   
    printf("Enter a string to check for palindrome:");
    gets(str1);

   for(int i=0;i<strlen(str1);i++){
    

    if(str1[i]!=str1[strlen(str1)-1-i]){
        sm=1;
        break;
    }
   
   }
   if(sm==0){
    printf("The string is palindrome.");
   }else{
    printf("The string is not a palindrome.");
   }

}