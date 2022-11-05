#include<stdio.h>

int main()
{
    int arr[10]={2,4,3,4,7,3,6,2,5,1},*ptr,i,j;
    ptr=arr;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(ptr+i)==*(ptr+j))
            {
                break;
            }
        }
        if(j==10)
        {
            printf("%d",*(ptr+i));
        }
    }
    return 0;
}