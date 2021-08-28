/*
    WAP to print the sum of all the prime numbers between 1 to n.
*/
#include<stdio.h>
int main()
{
    int i,num,j,sum=0;
    
    printf("Upto what number the prime series continue : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;    
        }
        if(count==2)
            {
               sum+=i;
            }       
    }
    
    printf("Sum of prime number from 2 to %d = %d",num,sum);
}
