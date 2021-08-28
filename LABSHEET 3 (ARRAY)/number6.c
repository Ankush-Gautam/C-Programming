/*
    6. Write a C program to count total number of even and odd elements in an array.
*/
#include<stdio.h>
int main()
{
    int n,num[100],count=0,i;
    
    printf("How many elements?\n => ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter num %d : ",i+1);
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
            count++;
    }
    
    printf("\nTotal even numbers = %d and Total odd numbers = %d",count,n-count);
}
