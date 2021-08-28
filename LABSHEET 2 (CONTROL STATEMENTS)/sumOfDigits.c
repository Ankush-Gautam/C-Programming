/*
    WAP to find sum of digits of a number.
*/
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    
    printf("sum = %d",sum);
}
