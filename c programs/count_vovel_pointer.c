#include<stdio.h>
#include<string.h>

int main()
{
    char arr[30],*ptr;
    ptr=arr;
    int vovel=0;
    printf("Enter the string = ");
    gets(ptr);
    while (*ptr!='\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            vovel+=1;
        }
        ptr++;
    }
    printf("no of vovel in string are %d",vovel);
    return 0;

}