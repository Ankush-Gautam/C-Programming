/*
    6. Write a C program to find all prime numbers between given interval using functions.
*/
#include<stdio.h>
int isprime(int);
int printprime(int,int);
int total=0;
int main()
{
    int start,end;

    printf("Enter the intervals :");
    scanf("%d%d",&start,&end);

    printprime(start,end);
    printf("\n\nThere are total %d prime numbers between %d and %d\n\n",total,start,end); //jus wanted to know the total number between 1 to 1000
}

int isprime(int n)
{
    int count=0,i;

    for(i=1;i<=n;i++)
    {

        if(n%i==0)
            count++;
    }

    if(count==2)
    {
        printf("%d ",n);
        total++;
    }


}

int printprime(int num1,int num2)
{
    while(num1<=num2)
    {
        int output;

        output=isprime(num1);
        num1++;
    }
}
