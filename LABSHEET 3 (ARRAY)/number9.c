/*
    9. Write a C program to copy all elements from an array to another array.
*/
#include<stdio.h>
int main()
{
    int n,num[100],i,copy[100];
    
    printf("How many elements?\n => ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter num %d : ",i+1);
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<n;i++)
    {
       copy[i]=num[i];
       printf("\nnum%d = %d",i+1,copy[i]);
    }
}
