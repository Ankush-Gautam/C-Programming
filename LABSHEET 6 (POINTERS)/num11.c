///11. Write a C program to sort array using pointers.
#include<stdio.h>
#define n 5
int main()
{
    int arr[n],i,j,temp;

    //asking for elements of array
    for(i=0;i<n;i++)
    {
        printf("Enter element%d: ",i+1);
        scanf("%d",arr+i);
    }

    //rearranging in order
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if( *(arr+i) < *(arr+j) )
            {
                temp= *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }

    //printing sorted array
    printf("The sorted array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }

}
