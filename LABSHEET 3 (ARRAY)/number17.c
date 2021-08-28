/*
    17.Write a C program to search an element in an array. 
*/
#include<stdio.h>
int main()
{
    int array[100],n,i,search;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the element%d : ",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("Enter the element you want to search: ");
    scanf("%d",&search);
    
    for(i=0;i<n;i++)
    {
        if(array[i]==search)
        {
            printf("\n%d found at index %d!",search,i);
        }
    }
}
