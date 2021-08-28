/*
    1. Write a C program to find length of a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    
    puts("Enter a string: ");
    gets(str);
    
    printf("Length of the string: %d",strlen(str));
}
