/*
    WAP to enter a number and print its reverse.
*/
#include<stdio.h>
int main()
{
    int num,num_rev,rem;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        rem=num%10;
        num_rev=rem+num_rev*10;
        num=num/10;
    }
    
    printf("Reversed number = %d",num_rev);
}
