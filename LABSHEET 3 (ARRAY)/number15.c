/*
    15.Write a C program to find reverse of an array.
*/
#include <stdio.h>
int main()
{
    int arr[100], reverse[100];
    int size, i, arrIndex, revIndex;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;
    while(arrIndex >= 0)
    {
        reverse[revIndex] = arr[arrIndex];
        revIndex++;
        arrIndex--;
    }

    printf("\nReversed array : \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n", reverse[i]);
    }
    return 0;
}
