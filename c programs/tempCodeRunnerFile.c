#include<stdio.h>

int main()
{
    int *ptr,num[5]={5,2,4,6,8};
    ptr=&num[0];
    *(ptr+3)=4;
    printf("Value = %d\n",*(ptr-0));
    ptr++;
    printf("Value = %d\n",*ptr);
    //ptr--;
    printf("Value = %d\n",*ptr);
    //ptr--;
    printf("Value = %d\n",*ptr);
    return 0;
}