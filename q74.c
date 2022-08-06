//Write a program to read a line of text and delete all the vowels from it.
#include <stdio.h>
#include <string.h>
void main()
{

    char str[500], str1[500];
    int a = 0;
    printf("Enter a string:");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            continue;
        }
        else
        {
            str1[a] = str[i];
            a++;
        }
    }
    printf("%s", str1);
}
