#include<stdio.h>

int main()
{
    float *n1,*n2,*sum,add,num1,num2;
    n1=&num1,n2=&num2,sum=&add;
    printf("Enter the value of num1 and num2 = ");
    scanf("%f %f",&num1,&num2);
    add= *n1+*n2;
    printf("sum of num1 and num2 is %.2f",*sum);
    return 0;
    
}