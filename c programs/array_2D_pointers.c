#include<stdio.h>

int main()
{
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int (*ptr)[2],i,j;
    ptr=arr;
    for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
    }
    return 0;
}