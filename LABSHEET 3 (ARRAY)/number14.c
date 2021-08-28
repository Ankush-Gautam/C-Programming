/*
    14.Write a C program to merge two arrays to third array.
*/
#include<stdio.h>
int main()
{
    int array1[50],array2[50],array3[100],array1_size,array2_size,i,n,j;
    
    //first array
    printf("Enter the size of 1st: ");
    scanf("%d",&array1_size);
    
    printf("\nEnter elements of first array:");
    for(i=0;i<array1_size;i++)
    {
        scanf("%d",&array1[i]);
    }
    
    //second array
    printf("\nEnter the size of 2nd: ");
    scanf("%d",&array2_size);
    
    printf("\nEnter elements of second array:");
    for(i=0;i<array2_size;i++)
    {
        scanf("%d",&array2[i]);
    }
    
    n=array1_size + array2_size;
    
    //merging both arrays to the third one
    for(i=0;i<array1_size;i++)
    {
        array3[i]=array1[i];
    }
    for(i=array1_size,j=0;i<n;i++)
    {
        array3[i]=array2[j];
        j++;
    }
    
    for(i=0;i<n;i++)
    {
        printf("\n%d",array3[i]);
    }
}
