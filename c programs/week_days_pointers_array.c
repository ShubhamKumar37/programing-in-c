#include<stdio.h>

int week_day(int day)
{
    char *arr[7]={"MONDAY","TUESDAY","WEDNESDAY","THUSDAY","FRIDAY","SATURDAY","SUNDAY"};
    if (day>=1 && day<=7)
    {
        printf("%s",*(arr+day+1));
    }
    else
    {
        printf("YOU ENTERED SOMETHING ELSE");
    }
}

int main()
{
    int day;
    printf("Enter the no of day = ");
    scanf("%d",&day);
    week_day(day);
    return 0;
}