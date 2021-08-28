///1. Write a C program to create, initialize and use pointers.
#include<stdio.h>
int main()
{
    int a=10,*ptr;

    ptr = &a; //initializing ptr to the address of variable a

    printf("The address of a is %d",ptr);
}
