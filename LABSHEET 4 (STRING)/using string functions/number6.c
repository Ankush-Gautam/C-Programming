/*
    6. Write a C program to convert uppercase string to lowercase.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    
    printf("Enter a string in uppercase: ");
    gets(str);
    
    printf("Lowercase : %s",strlwr(str));
}
