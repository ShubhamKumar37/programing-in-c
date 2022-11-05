#include<stdio.h>
int opt(int (*func)(int,int),int a,int b)
{
    return (*func)(a,b);
}
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a=234,b=567;
    printf("Sum of 2 numbers = %d",opt(sum,a,b));
    return 0;
}