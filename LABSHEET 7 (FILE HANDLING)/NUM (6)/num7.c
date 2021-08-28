// Write a C program to merge two files to third file.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch1,ch2;
    //opening the files in different modes
    fp1 = fopen("file1.txt","r");
    fp2 = fopen("file2.txt","r");
    fp3 = fopen("file3.txt","a");

    if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File cannot be opened!");
        exit(0);
    }

    ch1 = getc(fp1);
    ch2 = getc(fp2);

    //logic to merge the files
    while(ch1!=EOF)
    {
        fprintf(fp3,"%c",ch1);
        ch1 = getc(fp1);
    }

    while(ch2!=EOF)
    {
        fprintf(fp3,"%c",ch2);
        ch2 = getc(fp2);
    }
    //closing the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
