#include <stdio.h>

struct student
{
    int r_no;
    char name[10];
    int fee;
} * ptr;

int main()
{
    struct student n;
    ptr = &n;
    printf("Enter the rollno of student = ");
    scanf("%d", &ptr->r_no);
    printf("Enter the name of the student = ");
    scanf("%s", &ptr->name);
    printf("Enter the fee of the student = ");
    scanf("%d", &ptr->fee);
    printf("Name of the student is %s\n", &ptr->name);
    printf("Roll number of the student is %d\n", ptr->r_no);
    printf("Fee of the student is %d\n", ptr->fee);
    return 0;
}