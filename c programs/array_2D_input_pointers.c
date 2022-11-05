#include<stdio.h>

int main()
{
    int arr[2][3];
    int i,j,(*ptr)[3];
    ptr=arr;
    printf("Enter the numbers\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the number at index of %d %d ",i,j);
            scanf("%d",(*(ptr+j)+i));
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",*(*(ptr+j)+i));
        }
    }
    return 0;

}