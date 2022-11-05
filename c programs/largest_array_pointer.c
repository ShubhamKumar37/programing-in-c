#include<stdio.h>

int main()
{
    int arr[5],*ptr,*max,m1=-9999,i;
    ptr=arr;
    max=&m1;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the element of index %d = ",i+1);
        scanf("%d",ptr+i);
    }
    for (i=0;i<5;i++)
    {
        if(*(arr+i)>=*max)
        {
            *max=*(arr+i);
        }
        else
        {
            continue;
        }
    }
    printf("Largest element in the array is %d",*max);
    return 0;
}