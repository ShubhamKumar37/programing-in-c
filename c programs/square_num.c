#include<stdio.h>

int main(){
    int a[99],b;
    printf("enter the number you want to add square in array ");
    scanf("%d",&b);
    for (int i=0;i<=b+1;i++){
        a[i]=i*i;
    }
    for (int j=0 ;j<b+1;j++){
        printf("elements at %d index is %d \n",j,a[j]);
    }
    printf("%d",a[10]);
    return 0;


}