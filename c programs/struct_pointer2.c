#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int r_no;
    char name[20];
    int fee;
} s1;

int main()
{
    s1 *ptr[10];
    int a;
    printf("Enter the number of student = ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        ptr[i] = (s1 *)malloc(sizeof(s1));
        printf("Enter the roll no of student %d = ", i + 1);
        scanf("%d", &ptr[i]->r_no);
        printf("Enter the name of the student %d = ", i + 1);
        scanf("%s", &ptr[i]->name);
        printf("Enter the fee of the student %d = ", i + 1);
        scanf("%d", &ptr[i]->fee);
    }
    for (int i = 0; i < a; i++)
    {
        printf("Roll number of the student is %d\n", ptr[i]->r_no);
        printf("Name of the student is %s\n", ptr[i]->name);
        printf("Fee of the student is %d\n", ptr[i]->fee);
    }
    return 0;
}