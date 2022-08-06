// Program that accept the elements of 3x3 matrix and calculate the sum of all elements of the matrix.
#include <stdio.h>
void main()
{
    int a[3][3], sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the matrix element [%d%d]", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    } 
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    printf("The sum of all elements of the matrix is %d",sum);
  
}