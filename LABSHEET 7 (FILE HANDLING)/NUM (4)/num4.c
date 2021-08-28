// Write a C program to append content to a file.

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt","a");
    if(fp == NULL)
    {
        printf("File doesn't exist!\n");
        exit(0);
    }

    fprintf(fp,"Tc programming to append content to a file");
    fclose(fp);
}
