/*
    WAP to calculate factorial of a number
*/
#include<stdio.h>
int main()
{
    int fact=1,i,num;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(i=num;i>=1;i--)
    {
        fact = fact * i;
    }
    
    printf("Factorial of %d = %d ",num,fact);
}
