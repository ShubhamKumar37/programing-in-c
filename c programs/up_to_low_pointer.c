#include<stdio.h>

int main()
{
    char *ch,str;
    ch=&str;
    printf("Enter the charecter = ");
    scanf("%c",&str);
    printf("Entered charecter is %c\n",*ch);
    if(*ch >='A' && *ch <='Z')
    {
        printf("After changing the charecter is %c\n",*ch+32);
    }
    else
    {
        printf("You enterd a lower case or other charecter ");
    }
    return 0;

}