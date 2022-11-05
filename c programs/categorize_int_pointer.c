#include<stdio.h>

int main()
{
    int *a,i=1, arr[2];
    a=arr;
    printf("Enter the value of array \n");
    printf("Enter the value of index 0 = ");
    scanf("%d",a);
    while (i!=2)
    {
        a++;
        printf("Enter the value of index %d = ",i);
        scanf("%d",a);
        i++;
    }
    a=arr;
    for (i=0;i<2;i++,a++)
    {
        if(*a==0)
        {
            printf("You entered a zero number\n");
        }
        else if(*a<=0)
        {
            printf("You entered a negeative number\n");
        }
        else 
        {
            printf("You entered a positive number\n");
        }
    }
    return 0;
}