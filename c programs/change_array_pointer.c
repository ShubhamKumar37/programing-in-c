#include<stdio.h>

int main()
{
    int arr[]={2,56,3,6,7,4,5};
    int *ptr=&arr[2];
    *ptr=99;
    *(ptr+1)=98;
    *(ptr-2)=96,*(ptr-1)=97;
    for(int i=0;i<=7;i++)
    {
        printf("Value of array in index %d is %d\n",i,*(arr+i));
    }
    return 0;
}
