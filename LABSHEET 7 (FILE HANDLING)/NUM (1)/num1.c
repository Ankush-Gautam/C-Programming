// Write a C program to create a file and write contents, save and close the file.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char content[100];

    fp = fopen("file.txt","w");   //opening the file in write mode

    if(fp==NULL){
        printf("File cannot be opened!!\n");    //if the file couldn't be created by various reasons
        exit(0);
    }
    else
        printf("File created successfully!\n");

    fprintf(fp,"Hello world\n");    //writing to the file

    fclose(fp);

}
