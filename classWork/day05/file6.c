#include <stdio.h>

int dispList(int [], int);
int sortDesc(int [], int);


int main()
{
    int arr[] = {10,1,3,5,2,8,9,22};
    int Size = sizeof(arr)/sizeof(arr[0]);
    printf("\nBefore Sort\n");
    dispList(arr,Size);
    sortDesc(arr,Size);
    printf("\nAfter Sort");
    dispList(arr, Size);
    printf("\n%d",arr[3]);
    printf("\n\n");
    return 0;
}

int dispList(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d->",a[i]);
    
    printf("\n");
}


// sort the elements of an array in desc order