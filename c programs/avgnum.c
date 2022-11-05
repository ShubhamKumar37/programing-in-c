#include<stdio.h>
int main(){
    int arr[1000],size,i,sum=0;
    printf("enter array size ");
    scanf("%d",&size);
    printf("enter array elements");
    for(i=0;i<size;i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
          sum=sum+arr[i]; 
    printf("avg of the elements of array=%d",sum/size);
    return 0;
}