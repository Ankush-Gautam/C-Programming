/*
    5. Write a C program to convert lowercase string to uppercase.
*/
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    
    printf("Enter a string in lowercase : ");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]-32;
    }
   
    printf("OUTPUT: %s",str);

}
