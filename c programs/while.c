#include<stdio.h>

int main(){
    int i=1,a;
    printf("enter the number = ");
    scanf("%d",&a);
    while (i<=10){
        printf("13 * %d = %d\n",i,i*a);
        i+=1;
    }
    return 0;
}