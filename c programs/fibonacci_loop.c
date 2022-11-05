#include<stdio.h>

int main(){
    int a,num;
    int x=0,y=1;
    printf("enter the number");
    scanf("%d",&a);
    printf("%d\n%d\n",x,y);

    for (int i = 0;i<a-1;i++){
        if (a==0 || a==1){
            printf("%d \n",a);
            break;
        }
        else{
            num=x+y;
            x=y;
            y=num;
            printf("%d \n",num);
        }
    }
    return 0;
}