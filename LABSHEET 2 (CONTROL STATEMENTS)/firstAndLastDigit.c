/*
    WAP to find first and last digit of a number.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    long int num,fdigit,ldigit,n,count=0;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    n=num;
    ldigit=num%10;
    
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    
    fdigit=num/pow(10,count-1);
    printf("First digit = %d\n",fdigit);
    printf("Last digit = %d",ldigit);
}
