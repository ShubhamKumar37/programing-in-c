#include<stdio.h>
int main(){
    int arr[1000],size,i,sum=0;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter array elements");
    for(i=0;i<size;i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
          sum=sum+arr[i]; 
    printf("sum of the elements of array=%d",sum);
    return 0;
}