//. Write a C program to read file contents and display on console.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("file.txt","r");   // opening the file in read mode

    if(fp == NULL)
    {
        printf("File couldn't be opened!!\n");
        exit(0);
    }

    c=getc(fp);
    while(c != EOF)
    {
        printf("%c",c);     //printing the content of the file in console as a char in loop
        c=getc(fp);
    }

    fclose(fp);   //closing the file
}
