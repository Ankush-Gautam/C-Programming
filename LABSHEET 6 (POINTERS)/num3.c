///3. Write a C program to swap two numbers using pointers.
#include<stdio.h>
int main()
{
    int num1,num2,*a,*b,temp;

    //asking for user input
    printf("Enter the value of A: ");
    scanf("%d",&num1);
    printf("Enter the value of B: ");
    scanf("%d",&num2);

    printf("\nBefore swapping the value: A=%d and B=%d",num1,num2); // printing the value of a and b

    a=&num1;//initializing pointer a to the address of num1
    b=&num2;//and pointer b to the address of num2

    temp=*a;
    *a=*b;
    *b=temp;


    //printing the swapped value
    printf("\n After Swapping the value: A=%d and B=%d\n",*a,*b);

}
