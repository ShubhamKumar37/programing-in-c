/*

1. pointers
*ptr,num
ptr=&num
printf("%d",*ptr);
scanf("%d",ptr);
gets(ptr);
*ptr=100;

2. array with pointers
ptr=num , ptr=&num[0]
*(ptr+i)=2; use to acces value and update not to change the
index of pointer
printf("%d",*(ptr+2));
scanf("%d",(ptr+2));

3. passing pointer array to function
int sum(int arr[],*n) or int sum(int *arr,*n)
printf("%d",sum(arr,&n));

4. structures
struct student
{
    int fee;
    char name[20];
}s1,s2;
or
struct student s1,s2; //global
int main()
{
    struct student s1,s2;
}

5. typedef structures
typedef struct
{
    int fee;
    char name[20];
}<alis name> |only space |<variables>;
<alias name> s1,s2;
int main()
{
    <alias name> s1,s2;
    s1.fee;
}

6. structure ,function and pointer
typedef struct student
{
    int fee;
    char name[20];
}ST;
ST sum(ST *,ST *)
ST sum(ST *a,ST *b)
{
    printf("%d",a->fee);
    scanf("%d",&a->fee);
}
a->fee=400000;
*/
#include <stdio.h>

int main()
{
    return 0;
}