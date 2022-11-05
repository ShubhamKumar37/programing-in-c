#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s, area;
    printf("Enter the sides of triangle \n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt((s-a)*(s-b)*(s-c));
    printf("Area of given triangle = %.2f",area);
    return 0;
}