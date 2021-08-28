/*
    11. Write a C program to find reverse of a string.
*/
#include<stdio.h>

int main()
{
    char str[20],rev[20];
    int i,j;
    
    printf("Enter a string: ");
    gets(str);
    
    
    for(i=0;str[i]!='\0';i++); //for counting length of the string
    
    i--;
    for(j=0;str[j]!='\0';j++)
    {
        rev[i]=str[j];
        i--;
    }
    
   
    printf("OUTPUT: %s",rev);
}
