/*
    WAP to print all Perfect numbers between 1 to n.
*/
#include<stdio.h>
int main()
{
    long int n,sum,i,j;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1,sum=0;j<i;j++)
        {
            if(i%j==0)
            {   
                sum+=j;
            }
           
        }
            if(sum==i)
            {
               printf("%d\n",sum);
            }
    }
}
