// Write a C program to remove a word from text file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp, *outfp;
    char ch,str[100], word[20];
    int i, j, ls, lw, temp, chk=0;

    fp = fopen("file.txt","r");
    outfp = fopen("removed_word_file.txt","w");
    if(fp == NULL || outfp ==NULL){
        printf("File cannot be Opened!");
        exit(0);
    }
    //reading the file and storing it in a string
    ch= getc(fp);
    while(ch != EOF)
    {
        fgets(str,100,fp);
        ch= getc(fp);
    }

    //asking for the word to be removed
    printf("\nEnter the word to remove: ");
    gets(word);

    //finding the length of string of file and of word to be removed
    ls = strlen(str);
    lw = strlen(word);

    for(i=0; i<ls; i++){
        temp = i;
        for(j=0; j<lw; j++){
            if(str[i]==word[j])
                i++;
        }
        chk = i-temp;
        //if the word matched in the string
        // removing the word
        if(chk==lw)
        {
            i = temp;
            for(j=i; j<(ls-lw); j++){
                    str[j] = str[j+lw];
            }

            ls = ls-lw;
            str[j]='\0';
        }
    }
    //printing the new string with removed word
    fputs(str,outfp);
    printf("Word removed successfully!");
    fclose(fp); //closing the file
    fclose(outfp);
    return 0;
}
