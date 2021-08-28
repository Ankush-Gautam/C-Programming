/*
    11.Write a C program to delete an element from an array at specified position.
*/
#include<stdio.h>
int main()
{
    int array[100],i,pos,size;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("Enter element%d : ",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("Enter the position of array you want to delete: ");
    scanf("%d",&pos);
    
    if(pos<0 || pos>size)
    {
        printf("Invalid position!!");
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
         {
        array[i]=array[i+1];
          }
          size--;
    
         for(i=0;i<size;i++)
         {
              printf("%d\n",array[i]);
         }
    }
    
    
}
