/*
    WAP to find sum of all the even numbers from 1 to n.
*/
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i+=2)
    {
        sum += i;
    }
    
    printf("Sum of even numbers from 1 to %d = %d",n,sum);
}
