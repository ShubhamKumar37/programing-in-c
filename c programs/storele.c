#include <stdio.h>  
void  main(){  
    int arr[1000]; 
    int i,n;
    printf("enter the number of element ");
    scanf("%d",&n); 	
    printf("enter the elements in the array \n");  
    for(i=0; i<n; i++){  
	    printf("element %d =",i);
        scanf("%d",&arr[i]);  
    }
    printf("elements in array are ");  
    for(i=0; i<n; i++){  
        printf("%d  ", arr[i]);  
    } 	
}