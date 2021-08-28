/*
    WAP to count number of digits in an integer.
*/
#include<stdio.h>
int main()
{
    int count=0,num,dig;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        dig=num%10;
        count++;
        num /= 10;
        
    }
    
    printf("Total digits = %d",count);
}
