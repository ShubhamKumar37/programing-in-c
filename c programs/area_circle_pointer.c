#include<stdio.h>

int main()
{
    int *area,*r,               Carea,R;
    area=&Carea,r=&R;
    printf("Enter the radius of circle = ");
    scanf("%d",&R);
    Carea=3.12 * (*r) * (*r);
    printf("area of circle is %d",*area);
    return 0;
}