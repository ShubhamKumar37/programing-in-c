#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,r,l;
    char arr[9],str[9];
    printf("Enter the random string = ");
    gets(arr);
    printf("Enter the starting point and ending point = ");
    scanf("%d %d",&l,&r);
    if (l+r >strlen(arr))
    {
        printf("Invalid inputs ");
        exit(0);
    }
    for (i=0;i<=r;i++)
    {
        str[i]=arr[l+i];
    }
    str[i]='\0';
    printf("After manupulation string is %s",str);
    return 0;
}