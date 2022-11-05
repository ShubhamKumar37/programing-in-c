#include<stdio.h>
//Every time memory location get changed.
int main(){
    int a=10;
    int *point=&a;
    int *str=NULL;
    printf("%d \n",a);       // %u give positive value.
    printf("%p \n",&a);
    printf("%p \n",point);   //here it will print address of a.(because * operater is missing)
    printf("%p \n",str);
    printf("%d \n",*point);
    return 0;
}