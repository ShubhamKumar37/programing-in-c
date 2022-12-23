#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double x;
    double y;
} DataPoint;

double lagrange_basis(double x, DataPoint point, DataPoint *data_Ptr, int n)
{
    double x_val = point.x;
    double y_val = point.y;
    double numerator = 1;
    double denominator = 1;
    for (int i = 0; i < n; i++)
    {
        if (data_Ptr[i].x == x_val)
        {
            continue;
        }
        numerator *= (x - data_Ptr[i].x);
        denominator *= (x_val - data_Ptr[i].x);
    }
    return numerator / denominator;
}

double lagrange_interpolation(double x, DataPoint *data_Ptr, int n)
{
    double Inter_Po_y = 0;
    for (int i = 0; i < n; i++)
    {
        Inter_Po_y += data_Ptr[i].y * lagrange_basis(x, data_Ptr[i], data_Ptr, n);
    }
    return Inter_Po_y;
}

int main()
{
    DataPoint data_Ptr[] = {
        {1, 3},
        {2, 5},
        {3, 7}};
    int n = sizeof(data_Ptr) / sizeof(DataPoint);

    double x = 2.5;
    double Inter_Po_y = lagrange_interpolation(x, data_Ptr, n);
    printf("Interpolated y at x = %f: %f\n", x, Inter_Po_y);

    return 0;
}
