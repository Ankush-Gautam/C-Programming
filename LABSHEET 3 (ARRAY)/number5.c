/*
    5. Write a C program to find second largest element in an array.
*/
#include<stdio.h>
int main()
{
    int array[10],i,largest,second;
    
    for(i=0;i<10;i++)
    {
        printf("Enter the num%d : ",i+1);
        scanf("%d",&array[i]);
    }
    
    if(array[0] > array[1]) 
    {
      largest = array[0];
      second  = array[1];
    } 
    else
     {
      largest = array[1];
      second  = array[0];
     }

   for(i = 2; i< 10; i++)
    {
      if( largest < array[i] )
       {
         second = largest;
         largest = array[i];
      } 
      else if( second < array[i] ) 
      {
         second =  array[i];
      }
   }
 
    printf("Second largest number = %d ",second);
}
