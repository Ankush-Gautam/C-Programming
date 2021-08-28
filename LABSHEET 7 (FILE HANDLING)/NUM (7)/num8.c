// Write a C program to count characters, words and lines in a text file.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char ch;
    int count=0,words=1, lines=1;

    fp = fopen("file.txt","r");

    if(fp == NULL)
    {
        printf("File cannot be opened!");
        exit(0);
    }

    ch = getc(fp);

    while(ch!=EOF)
    {
        count++;
        if(ch == ' ')   //if ch encounters a space then word-count increases
            words++;

        if(ch == '\n')
            lines++;    //if ch encounters a line break then line-count increases by 1

        ch = getc(fp);
    }

    fclose(fp);//closing the file

    printf("Characters = %d \t Words = %d \t Lines = %d\n\n",count,words,lines);

    return 0;
}
