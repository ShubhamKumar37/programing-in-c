#include<stdio.h>

int main()
{
    int *n,num;
    n=&num;

    printf("Enter theh number = ");
    scanf("%d",&num);
    for (int i=1;i<=100;i++)
    {
        printf("%d X %d = %d\n",*n,i,*n * i);
    }
    return 0;
}