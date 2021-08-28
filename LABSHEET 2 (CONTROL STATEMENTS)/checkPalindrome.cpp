/*
    WAP to check whether a number is palindrome or not.
*/
#include<stdio.h>
int main()
{
    int num,n,rev_num=0,rem;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        rem=num%10;
        rev_num=rem+rev_num*10;
        num=num/10;
    }
    
    if(rev_num==n)
        printf("%d is a palindrome number.",n);
    else
        printf("%d is not a palindrome number.",n);
}
