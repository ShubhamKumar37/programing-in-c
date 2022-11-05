#include <stdio.h>

int main(){
    int n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the array");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1; j<n ;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("second largest element is %d",a[1]);
    return 0;
}