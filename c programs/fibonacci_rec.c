#include<stdio.h>

int fib_rec(int x){
    if (x==0){
        return 0;
    }
    else if (x==1){
        return 1;
    }
    else{
    return fib_rec(x-1)+fib_rec(x-2);
    }
}




int main(){
    int a ;
    printf("enter the number = ");
    scanf("%d",&a);
    printf("%d",fib_rec(a+2));
    return 0;

}