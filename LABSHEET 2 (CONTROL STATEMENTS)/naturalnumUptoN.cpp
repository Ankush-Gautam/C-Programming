/*
    WAP to print all the natural numbers from (1 to n) using while loop.
*/
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Upto how much you want to display the natural number,\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}
