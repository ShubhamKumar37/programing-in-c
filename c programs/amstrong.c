#include<stdio.h>
int main(){
    int n ,num,rev=0,mod;
    printf("enter the three number value");
    scanf("%d",&n);
    num=n;
    while (num!=0){
        mod=num%10;
        rev+=mod*mod*mod;
        num/=10;
    }
    if (mod==n)
        printf("%d is the amstrong number", n);
    else 
        printf("%d is not the amstrong number", n);
    return 0;
    
}