/*Write a program to find the largest and smallest among three entered numbers and
also display whether the identified largest/smallest number is even or odd.*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,largest,smallest;
    
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("\n");
    
    //to find largest
    if(num1>num2 && num1>num3)
    {
        largest = num1;
        printf("%d is the largest number.",num1);
    }
        
    else if(num2>num1 && num2>num3)
    {
        largest = num2;
        printf("%d is the largest number.",num2);
    }
     
    else
    {
        largest = num3;
        printf("%d is the largest number.",num3);
    }
    
    //to find even or odd for largest number
    if(largest%2==0)
        printf("%d is an even number.",largest);
    else
        printf("%d is an odd number.",largest);
        
    printf("\n\n");
    //to find smallest
    
    if(num1<num2 && num1<num3)
    {
        smallest = num1;
        printf("%d is the smallest number.",num1);
    }
        
    else if(num2<num1 && num2<num3)
    {
        smallest = num2;
        printf("%d is the smallest number.",num2);
    }
     
    else
    {
        smallest = num3;
        printf("%d is the smallest number.",num3);
    }
    
    //to find even or odd for smallest number
    if(smallest%2==0)
        printf("%d is an even number.",smallest);
    else
        printf("%d is an odd number.",smallest);
}
