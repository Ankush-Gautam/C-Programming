/*
    WAP to display all the alphabets from a-z using ascii value.
*/
#include<stdio.h>
int main()
{
    char ch;
    
    for(ch=97;ch<=122;ch++)
    {
        printf("%c\t",ch);    
    }
}
