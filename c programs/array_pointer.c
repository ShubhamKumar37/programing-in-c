#include<stdio.h>

int main()
{
    int *ptr,x[3]={1,4,3};
    ptr= &*(x+0);
    printf("value at 1 index is %d\n",*ptr);
    ptr++;
    printf("value at 3 index is %d",*ptr);
    return 0;
}