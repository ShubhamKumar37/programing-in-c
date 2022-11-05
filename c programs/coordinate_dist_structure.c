#include <stdio.h>
#include <math.h>

int main()
{
    typedef struct coordinate
    {
        int x, y;
    } c;
    c p1, p2;
    float dist = 0;
    printf("Enter the coordinate of 1st point = ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the cordinate of 2nd point = ");
    scanf("%d %d", &p2.x, &p2.y);
    dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    printf("Distance of the points is %f", dist);
}