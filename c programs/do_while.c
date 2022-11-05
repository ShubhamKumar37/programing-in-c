#include<stdio.h>

int main(){
    int a,ind=1,i;
    printf("table of which number  = ");
    scanf("%d",&a);
    printf("upto which number you want the table = ");
    scanf("%d",&i);

    do{
        printf("%d * %d = %d \n",a,ind,a*ind);
        ind+=1;
        /*if (ind%2==1){
            ind+=1;
        }*/
    }while (ind<=i);
    return 0;
}