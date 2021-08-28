/*
    4. Write a C program to find maximum and minimum element in an array.
*/
#include<stdio.h>
int main()
{
    int num[10],i,max,min;
    
    for(i=0;i<10;i++)
    {
        printf("Enter num%d : ",i+1);
        scanf("%d",&num[i]);
    }
    
    max = num[0];
    for(i=0;i<10;i++)
    {
        if(max<num[i])
            max = num[i];
    }
    min=num[0];
    for(i=0;i<10;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    
    printf("\nMax = %d and Min = %d ",max,min);
}
