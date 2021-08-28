/*
     8. Write a C program to print all Armstrong numbers between given interval using functions.
*/
#include<stdio.h>
#include<math.h>

int isarmstrong(int);   //to check
int printarmstrong(int,int);    //to print

int main()
{
    int start,end;

    printf("Enter the intervals: ");
    scanf("%d%d",&start,&end);

    printf("Armstrong numbers: ");
    printarmstrong(start,end);  //output
    printf("\n\n");
}

//checking for Armstrong number
int isarmstrong(int n)
{
    int i,j,sum=0,rem,digit=0,num,Originalnum;

    Originalnum=n;
    num=n;

    //counting number of digits
    while(num!=0)
    {
        num=num/10;
        digit++;
    }

    while(n!=0) //checking the condition for armstrong
    {
        rem=n%10;
        sum+=pow(rem,digit);
        n/=10;
    }

    if(Originalnum == sum)
    {
        printf("%d\t",Originalnum);
    }
}

//printing Armstrong between the given  intervals
int printarmstrong(int num1,int num2)
{
    int output;

    while(num1<=num2)
    {
        output=isarmstrong(num1);
        num1++;
    }
}



