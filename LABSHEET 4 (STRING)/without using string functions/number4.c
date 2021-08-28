/*
    4. Write a C program to compare two strings.
*/
#include<stdio.h>

int compare(char [],char[]); //declaring
int main()
{
    char str1[50],str2[50];
    int i,z;
    
    //getting inputs from the user 
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    z=compare(str1,str2);
    
    if(z==0)
        printf("Strings are same!");
    else
        printf("Strings are not same!!!");
    
    return 0;
}

int compare(char a[], char b[])
{
    int flag=0,i;
    
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    
    if(flag==0)
    return 0;
    
    else
    return 1;
}



