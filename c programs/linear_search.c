#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10],i,a;
    for (i=0;i<10;i++)
    {
        arr[i]=rand()%5;
        printf("Element at index %d is %d\n",i,arr[i]);
    }
    
    printf("Enter the element to search = ");
    scanf("%d",&a);

    for (i=0;i<10;i++)
    {
        if(arr[i]==a)
        {
            printf("Element found at index %d with value = %d",i,arr[i]);
            break;
        }

        else
        {
            printf("NOT AT INDEX %d\n",i);
            continue;
        }
    }
    return 0;
}