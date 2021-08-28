/*
    WAP to print all the prime number between 1 to n.
*/
#include<stdio.h>
int main()
{
    int i,num,j;
    
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
                printf("%d\t",i);
            }       
    }
    
}
