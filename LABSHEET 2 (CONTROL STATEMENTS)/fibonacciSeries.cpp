/*
    WAP to print Fibonacci series up to n terms.
*/
#include<stdio.h>
int main()
{
    int num,a=0,b=1,c;
    
    printf("Upto to what term(th) does the series continue: ");
    scanf("%d",&num);
    
    printf("%d\t%d\t",a,b);
    
    for(int i=1;i<=num-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
