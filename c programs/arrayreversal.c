#include<stdio.h>

int main(){
    int i,a,temp;
    int t[5];
    printf("Enter the amount of elements needed to insert = ");
    scanf("%d",&a);
    for (i=0;i<a;i++){
        printf("Enter the element inedx %d = ",i);
        scanf("%d",&t[i]);
    }
    for (i=0;i<a/2;i++){
        temp=t[i];
        t[i]=t[a-i-1];
        t[a-i-1]=temp;
    }
    for (i=0;i<a;i++){
        printf("after swap element of %d index is =%d \n",i,t[i]);
    }
    return 0;

}