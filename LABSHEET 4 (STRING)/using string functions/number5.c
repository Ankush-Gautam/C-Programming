/*
    5. Write a C program to convert lowercase string to uppercase.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Uppercase : %s",strupr(str));
}
