#include<stdio.h>
int main(){
    int n1,n2,*x,*y,sum;
    printf("enter the number n1  ");
    scanf("%d",&n1);
    printf("enter the number n2  ");
    scanf("%d",&n2);
    x=&n1;
    y=&n2;
    sum=*x+*y;
    printf("%d is the sum of two number",sum);
}