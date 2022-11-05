#include<stdio.h>
int main(){
    int n,avg; 
    int i=1,sum=0;
    for (i=1;i<=10;i++){
        printf("enter the number ");
        scanf("%d",&n);
        sum+=n;

    }
    avg=sum/10;
    printf("sum of number %d average of number %d",sum,avg);
    return 0;
}