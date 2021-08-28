/*
    2. Write a C program to copy one string to another string.
*/
#include<stdio.h>
int main()
{
    char str[50],copy[50];
    int i;
    
    printf("Enter a string : ");
    gets(str);
    
    for(i=0;i<str[i];i++)
    {
        copy[i]=str[i];        
    }
    
    printf("Copied String: ");
    for(i=0;i<str[i];i++)
    {
        printf("%c",copy[i]);
    }
    
}
