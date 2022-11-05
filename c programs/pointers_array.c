#include<stdio.h>

int main()
{
    int arr1={1,2,3,4},arr2={3,4,5,6},arr3={7,8,9,0};
    int *arr[3]={arr1,arr2,arr3};
    printf("NOW VALUE OF FIRST INDEX's \n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",*(arr+i));
    }
    return 0;
}