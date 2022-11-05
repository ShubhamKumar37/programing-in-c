#include<stdio.h>
int main(){
    float num, square;
    printf("Please Enter any integer Value : ");
    scanf("%f",&num);
    square=num*num;
    printf("square of a given number %.2f is %.2f",num,square);
    return 0;
}