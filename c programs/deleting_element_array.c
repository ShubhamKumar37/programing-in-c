#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[11],i,a,pos;
    for (i=0;i<10;i++)
    {
        arr[i]=rand()%20;
        printf("Element at index %d is %d\n",i,arr[i]);
    }
    printf("Enter the position of the element = ");
    scanf("%d",&pos);
    for (i=pos;i<10;i++)
    {
        arr[i]=arr[i+1];
    }

    for (i=0;i<9;i++)
    {
        printf("Element at index %d is %d\n",i,arr[i]);
    }
    return 0;
}