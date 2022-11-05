#include<stdio.h>
int main(){
    float c,f,result;
    printf("enter the value in fahrenheit:");
    scanf("%f",&f);
    result=5*(f-32)/9;
    printf("tempreature in celsius %5f",result);
    return 0;
}