/*
    WAP to find sum of all the natural numbers between 1 to n.
*/
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    
    printf("Sum from 1 to %d = %d",n,sum);
}
