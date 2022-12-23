#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double x;
    double y;
} DataPoint;

double divided_difference(int i, double x, DataPoint *data_points, int n)
{
    if (i == 0)
    {
        return data_points[0].y;
    }
    return (divided_difference(i - 1, x, data_points, n) - divided_difference(i - 1, data_points[i - 1].x, data_points, n)) / (x - data_points[i - 1].x);
}

double newton_Inter_Potion(double x, DataPoint *data_points, int n)
{
    double Inter_Poted_y = 0;
    for (int i = 0; i < n; i++)
    {
        double product = 1;
        for (int j = 0; j < i; j++)
        {
            product *= (x - data_points[j].x);
        }
        Inter_Poted_y += divided_difference(i, x, data_points, n) * product;
    }
    return Inter_Poted_y;
}

int main()
{
    DataPoint data_points[] = {
        {1, 3},
        {2, 5},
        {3, 7}};
    int n = sizeof(data_points) / sizeof(DataPoint);

    double x = 2.5;
    double Inter_Poted_y = newton_Inter_Potion(x, data_points, n);
    printf("Interpolated y at x = %f: %f\n", x, Inter_Poted_y);

    return 0;
}
