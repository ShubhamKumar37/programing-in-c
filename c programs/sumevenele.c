#include<stdio.h>
int main(){
    int arr[1000],size,i,sum=0;
    printf("enter array size ");
    scanf("%d",&size);
    printf("enter array elements");
    for(i=0;i<size;i++)

        scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
        if (arr[i]%2==0){
            sum=sum+arr[i]; 
        }
    printf("sum of even elements of array=%d",sum);
    return 0;
}