// Write a C program to convert uppercase to lowercase character and vice versa in a text file.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
   FILE *infp, *outfp;
   char ch;

   //opening files
   infp = fopen("infile.txt","r");
   outfp = fopen("outfile.txt","w");
   if(infp == NULL || outfp == NULL){
        printf("File cannot be Opened!");
        exit(0);
   }

   //reading from file and converting
    ch = fgetc(infp);
    while(ch != EOF) {

       ch = (isupper(ch))? tolower(ch):toupper(ch);
        // write ch in temporary file.
        fputc(ch, outfp);

        ch = fgetc(infp);
   }


    //closing file
    fclose(infp);
    fclose(outfp);

    return 0;
}
