/*
    WAP to check whether a number is Perfect number or not.
*/
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    
    if(sum==n)
    {
        printf("%d is a perfect number.",n);
    }
    else
    {
        printf("%d is not a perfect number.",n);
    }
}
