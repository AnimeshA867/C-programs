// Program to add two 3×2 matrices and print the result in matrix form.
#include <stdio.h>
void main()
{
    int a[3][2], b[3][2], sum[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the matrix element [%d%d]", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    } 
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the matrix element [%d%d]", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
            
        }
        printf("\n");
            }
  
}