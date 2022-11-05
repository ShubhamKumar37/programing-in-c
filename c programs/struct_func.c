#include <stdio.h>

typedef struct
{
    int min;
    int hr;
} time;
time sum, n;
time add(time *, time *);
time sub(time *, time *);

int main()
{
    time num1, num2;
    printf("Enter the first and second hours = ");
    scanf("%d %d", &num1.hr, &num2.hr);
    printf("Enter the first and second minutes = ");
    scanf("%d %d", &num1.min, &num2.min);
    printf("Total time is %d %d", add(&num1, &num2).hr, add(&num1, &num2).min);
    return 0;
}

time add(time *a, time *b)
{
    sum.min = a->min + b->min;
    sum.hr = a->hr + b->hr;
    while (sum.min > 60)
    {
        sum.min -= 60;
        sum.hr++;
    }

    return sum;
}
time sub(time *a, time *b)
{
    n.min = a->min + b->min;
    while (n.min > 60)
    {
        n.min -= 60;
        n.hr++;
    }
    n.hr = a->hr + b->hr;
    return n;
}