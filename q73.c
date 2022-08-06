
#include<stdio.h>
#include<string.h>
void main(){
    int vowel=0,consonant=0;
    char str[500];
    printf("Enter a string:");
    gets(str);
    strlwr(str);
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=65&&str[i]>=90||str[i]>=97&&str[i]<=122){

        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'){
            vowel++;
        }
        else{
            consonant++;
        }
        }
    }
    printf("The total number of vowel in the string is %d\n",vowel);
    printf("The total number of consonant in the string is %d",consonant);
}
