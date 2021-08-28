/*
    20.Write a C program to add two matrices.
*/
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],rows,col,i,j;
    
    printf("Enter the no.of rows in the matrices: ");
    scanf("%d",&rows);
    printf("Enter the no.of column in the matrices: ");
    scanf("%d",&col);
    
    ////Elements of Matrix A
    printf("\n\nEnter the element of First Matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter value of %d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    ///Elements of Matrix B
    printf("\n\nEnter the element of Second Matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter value of %d%d : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    //printing the sum
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
