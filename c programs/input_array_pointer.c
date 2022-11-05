#include<stdio.h>

int main()
{
    int arr[5],*ptr,i;
    ptr=arr;
    printf("Enter the 5 elements ");
    for(i=0;i<=5;i++)
    {
        printf("\nEnter the element of index %d = ",i);
        scanf("%d",ptr+i);
    }
    for (i=0;i<=5;i++)
    {
        printf("\nElement of intdex %d = %d",i,*(arr+i));
    }
    return 0;
}