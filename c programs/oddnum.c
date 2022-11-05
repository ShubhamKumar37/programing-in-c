#include<stdio.h>
    int main(){
    int length,i,a[1000];
    int odd_no = 0;
    printf("\nenter the length of an array  ");
    scanf("%d",&length); 
    printf("\nenter the array elements\n");
    for(i=0;i<length;i++){
        printf("element %d = ",i);
        scanf("%d",&a[i]);
        } 
    for(i=0;i<length;i++){
       if(a[i]%2==1){
            odd_no++;
        }
    }  
    printf("\n odd number in array=%d",odd_no);
    return 0;
}