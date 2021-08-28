/*
    2. Write a C program to print all negative elements in an array.
*/
#include<stdio.h>
int main()
{
    int element[10],i;
    
    for(i=0;i<10;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&element[i]);
    }
    
    //printing negative num only
    for(i=0;i<10;i++)
    {
        if(element[i]<0)
            printf("\n%d",element[i]);
    }
}
