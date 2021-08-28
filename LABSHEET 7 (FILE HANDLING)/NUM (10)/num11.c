// Write a C program to count occurrences of a word in a text file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char ch,str[100], word[20];
    int i, j, ls, lw, temp, countW=0, chk;

    fp = fopen("file.txt","r");
    if(fp == NULL){
        printf("File cannot be Opened!");
        exit(0);
    }

    //storing the string of the file in str[100]
    ch = getc(fp);
    while(ch != EOF)
    {
        fgets(str,100,fp);
        ch = getc(fp);
    }

    //asking for the word to find its occurrence
    printf("Enter a Word to count its occurrence: ");
    gets(word);

    ls = strlen(str);
    lw = strlen(word);

    for(i=0; i<ls; i++)
    {
        temp = i;
        for(j=0; j<lw; j++)
        {
            if(str[i]==word[j])
                i++;
        }
        chk = i-temp;
        if(chk==lw)
            countW++;
        i = temp;
    }
    printf("\nOccurrence = %d", countW);
    return 0;
}
