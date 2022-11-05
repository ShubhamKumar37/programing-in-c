#include<stdio.h>

int main()
{
    float *b,a=3434.34;
    b=&a;
    printf("After changing %d",(int)*b);
    return 0;
}