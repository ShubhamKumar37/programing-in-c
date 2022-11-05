#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20], *ptr;
    ptr = arr;
    printf("Enter the string = ");
    gets(ptr);
    while (*ptr != '\0')
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr += 32;
            printf("%c", *ptr);
        }
        else if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr -= 32;
            printf("%c", *ptr);
        }
        else
        {
            printf("%c", *ptr);
            ptr++;
            continue;
        }
        ptr++;
    }
    return 0;
}