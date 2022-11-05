#include <stdio.h>
void main()
{
    int arr1[1000], arr2[1000];
    int i,n; 
    printf("enter the number of elements to be stored in the array ");
    scanf("%d",&n);
    printf("enter the %d elements in the array \n",n);
    for(i=0;i<n;i++){
	    printf("element  %d = ",i);
	    scanf("%d",&arr1[i]);
	}
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("element in first array\n");
    for(i=0;i<n;i++){
        printf("%5d",arr1[i]);
    }
    printf("\n");
    printf("element in second array\n");
    for(i=0; i<n; i++){
        printf("% 5d", arr2[i]);
    }
	       printf("\n");
}