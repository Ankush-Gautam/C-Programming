/*
    WAP to find sum of first and last digit of a number.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,fdigit,n,ldigit,count=0,i;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    ldigit=num%10;
    n=num;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    
    fdigit=num/pow(10,count-1);
    printf("Sum = %d",fdigit+ldigit);
}
