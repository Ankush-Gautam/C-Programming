/*
    7. Write a C program to count total number of negative elements in an array.
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
        if(num[i]<0)
            count++;
    }
    
    printf("Total Negative numbers: %d ",count);
}
