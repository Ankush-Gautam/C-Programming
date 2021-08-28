/*
    1.Write a C program to read and print elements of array.
*/
#include<stdio.h>
int main()
{
    int n,i,element[100];
    printf("Enter how many element: ");
    scanf("%d",&n);
    
    //reading elements entered by user
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&element[i]);   
    }
    
    //printing elements
    for(i=0;i<n;i++)
    {
        printf("\n%d",element[i]);
    }
}
