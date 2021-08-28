// Write a C program to read numbers from a file and write even, odd and prime numbers to separate file.

#include<stdio.h>
#include<stdlib.h>
#define size 10  // size of file to store  numbers

int isPrime(int);

int main()
{
    FILE *fp,*evenNumFile, *oddNumFile, *primeNumFile;
    int num[size],i;

    //opening files and printing error msg if file pointer is NULL
    fp = fopen("file.txt","r");
    evenNumFile = fopen("evenNum.txt","w");
    oddNumFile = fopen("oddNum.txt","w");
    primeNumFile = fopen("primeNum.txt","w");
    if(fp==NULL||evenNumFile==NULL||oddNumFile==NULL||primeNumFile==NULL)
    {

        printf("File cannot be opened!!");
        exit(0);
    }


    //reading numbers from the file and storing it in num[] array
   for(i=0;i<size;i++)
   {
       fscanf(fp,"%d",&num[i]);
   }

   //making 3 separate files to store even, odd and prime numbers
   for(i=0;i<size;i++)
   {
       if(num[i]%2==0)
            fprintf(evenNumFile,"%d\n",num[i]);
       else
            fprintf(oddNumFile,"%d\n",num[i]);

       //also searching for prime numbers
       if(isPrime(num[i])==num[i])
            fprintf(primeNumFile,"%d\n",num[i]);
   }

   //closing all the files
    fclose(fp);
    fclose(evenNumFile);
    fclose(oddNumFile);
    fclose(primeNumFile);

    return 0;
}

//to check if the number is prime or not
int isPrime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
    {
        return n;
    }


}

