#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,y1,y2, dist;
    printf("Enter the coordinate in formate of this x1,x2,y1,y2 \n");
    scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
    dist=sqrt(pow((x2-x1),2)+(pow((y2-y1),2)));
    printf("The distance between the coordinates are = %.2f",dist);
    return 0;
}