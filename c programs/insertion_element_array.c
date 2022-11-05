#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[11],i,a,pos;
    for (i=0;i<10;i++)
    {
        arr[i]=rand()%20;
    }
    printf("Enter the number want to add in array and its position = ");
    scanf("%d %d",&a,&pos);
    for (i=9;i==pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=a;
    for (i=0;i<10;i++)
    {
        printf("Element at index %d is %d\n",i,arr[i]);
    }
    return 0;
}