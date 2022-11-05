#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,d,a,b,c;

    printf("Enter the value of a,b,c = ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Roots of this equation are %.2f and %.2f",x1,x2);
    }
    else if (d==0)
    {
        x1=(-b)/(2*a);
        printf("Roots of this equation is %.2f",x1);
    }
    else
    {
        printf("Not possible");
    }
    return 0;
}