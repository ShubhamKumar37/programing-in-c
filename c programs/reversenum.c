#include<stdio.h>
int main(){
    int n,num,rev=0,mod;
    printf("enter the number");
    scanf("%d",&n);
    num=n;
    while (num!=0){
        mod=num%10;
        rev=rev*10+mod;
        num/=10;
    }
    printf("%d is the reverse ",rev);
    return 0;
}