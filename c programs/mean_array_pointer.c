#include<stdio.h>

int mean1(int *arr,int len)
{
    int sum=0;
    for (int i=0;i<len;i++)
    {
        sum+=*(arr+i);
    }
    return sum/len;
}

int main()
{
    int arr[5],*ptr,*m1,i,mean;
    m1=&mean;
    ptr=arr;
    printf("Enter the 5 elements ");
    for(i=0;i<5;i++)
    {
        printf("\nEnter the element of index %d = ",i+1);
        scanf("%d",ptr+i);
    }
    *m1=mean1(&arr[0],5);
    printf("\nMean of the given array is %d",*m1);
    return 0;
}