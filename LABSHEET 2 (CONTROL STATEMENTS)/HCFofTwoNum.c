/*
    WAP to find HCF of two numbers.
*/
#include<stdio.h>
int main()
{
    int num1,num2,i,min,hcf=1;
    
    printf("Enter any two numbers : ");
    scanf("%d%d",&num1,&num2);
    
    min=num1<num2?num1:num2;
    
    for(i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    
    printf("HCF of %d and %d = %d",num1,num2,hcf);
}
