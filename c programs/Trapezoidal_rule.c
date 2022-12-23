#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double function(double x)
{
    return x * x;
}

double trapezoidal_integration(double L_B, double U_B, int intervals)
{
    double interval_size = (U_B - L_B) / intervals;
    double integral = 0;
    for (int i = 0; i < intervals; i++)
    {
        double x1 = L_B + i * interval_size;
        double x2 = x1 + interval_size;
        integral += (function(x1) + function(x2)) / 2 * interval_size;
    }
    return integral;
}

int main()
{
    double L_B = 0;
    double U_B = 1;
    int intervals = 10;
    double integral = trapezoidal_integration(L_B, U_B, intervals);
    printf("Integral from %f to %f: %f\n", L_B, U_B, integral);

    return 0;
}
