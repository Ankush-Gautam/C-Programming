/*
    11. Write a C program to find reverse of a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("OUTPUT: %s",strrev(str));
}
