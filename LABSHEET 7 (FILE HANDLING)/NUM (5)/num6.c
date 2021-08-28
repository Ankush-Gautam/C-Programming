// Write a C program to copy contents from one file to another file.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *sourceFile, *destFile;
    char ch;
    //opening the files
    sourceFile = fopen("sourcefile.txt","r");
    destFile = fopen("copyfile.txt","w");

    if(sourceFile == NULL || destFile == NULL)
    {
        printf("File cannot be opened!");
        exit(0);
    }

    ch = getc(sourceFile);
    //copying the contents to another file
    while(ch != EOF)
    {
        fprintf(destFile,"%c",ch);
        ch = getc(sourceFile);
    }
    //closing the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
