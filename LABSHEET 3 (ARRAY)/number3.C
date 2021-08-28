/*
    3. Write a C program to find sum of all array elements.
*/
#include<stdio.h>
int main()
{
    int n,num[50],i,sum=0;
    
    printf("Enter how many elements : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&num[i]);
        sum+= num[i];   //adding elements to the sum
    }
    
    printf("\nSum = %d",sum);
}
