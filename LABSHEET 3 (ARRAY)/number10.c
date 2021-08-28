/*
    10.Write a C program to insert an element in an array.
*/
#include<stdio.h>
int main()
{
    int n,num[100],i,term,new_value;
    
    printf("How many elements?\n=> ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter num %d : ",i+1);
        scanf("%d",&num[i]);
    }
    
    printf("\nIn which term you want to insert: ");
    scanf("%d",&term);
    
    printf("\nEnter the value of the %dth term: ",term);
    scanf("%d",&new_value);
    
    num[term-1]=new_value;
    
    printf("\nNew updated Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
}
