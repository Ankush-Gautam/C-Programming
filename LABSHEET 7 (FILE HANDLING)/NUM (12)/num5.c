///5. Write a C program to compare two files.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1, *fp2;
    char chr1,chr2;

    //opening the file

    fp1 = fopen("file1.txt","r");
    fp2 = fopen("file2.txt","r");

    if(fp1 == NULL || fp2 == NULL){
        printf("File cannot be opened!");
        exit(0);
    }

    chr1 = getc(fp1);
    chr2 = getc(fp2);
    //getting the characters from the file

    while((chr1 !=  EOF)  && (chr2 != EOF) && (chr1==chr2))
    {
        chr1 = getc(fp1);
        chr2 = getc(fp2);
    }
    //comparing if the characters are identical
    if (chr1 == chr2)
         printf("Files are identical\n");

    else if (chr1 != chr2)
         printf("Files are Not identical\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
