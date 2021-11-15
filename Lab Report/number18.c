//18. Averaging a list of numbers
#include<stdio.h>
#define size 100
int main(){

    float numbers[size],sum=0;
    int i,n;

    printf("Enter how many number you want to list: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter number%d: ",i+1);
        scanf("%f",&numbers[i]);
        sum += numbers[i];
    }

    printf("Average of %d numbers = %.2f",n,sum/n);

    return 0;
}
