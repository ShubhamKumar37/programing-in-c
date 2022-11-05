#include <stdio.h>

int main()
{
    struct num
    {
        int a, b, c;
    } num1;
    printf("Enter the values of a,b,c = ");
    scanf("%d %d %d", &num1.a, &num1.b, &num1.c);
    if (num1.a >= num1.b && num1.a >= num1.c)
    {
        printf("The largest number is %d", num1.a);
    }
    else if (num1.b >= num1.a && num1.b >= num1.c)
    {
        printf("The largest number is %d", num1.b);
    }
    else
    {
        printf("The largest number is %d", num1.c);
    }
    return 0;
}