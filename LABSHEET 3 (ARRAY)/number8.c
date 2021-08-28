/*
   8. Write a C program to initialize integer array of size 50 and count number of elements
    that are exactly divisible by 5 and greater than 15.
*/
#include<stdio.h>
int main()
{
    int num[5],count=0,i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter num%d : ",i+1);
        scanf("%d",&num[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(num[i]%5==0 && num[i]>15)
            count++;
    }
    
    printf("Numbers divisible by 5 and greater than 15 = %d",count);
}
