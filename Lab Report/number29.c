#include<stdio.h>
#include<math.h>
void toh(int,char,char,char);

void main()
{
    int n;

    printf("Enter the no. of disks: ");
    scanf("%d",&n);
    toh(n,'A','C','B');

}

void toh(int n,char S,char D,char H)
{
    if(n>0)
    {
        toh(n-1,S,H,D); //move n-1 disks from S to H using D
        printf("Move disk %d from %c to %c\n",n,S,D);  //move nth disk from source to destination
        toh(n-1,H,D,S); //move n-1 disk from Helping_pole(H) to destination(D) using Source(S)
    }
}
