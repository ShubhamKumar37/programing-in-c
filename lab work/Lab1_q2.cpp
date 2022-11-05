#include <iostream>
#include <math.h>

using namespace std;

class Area
{
    double area;

public:
    void Find_Area(double c);
    void Find_Area(double a, double b);
    void Find_Area(double a, double b, double c);
};

void Area ::Find_Area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) + s * (s - b) + s * (s - c));
    cout << "Area of the Triangle is " << area << endl;
}

void Area ::Find_Area(double a, double b)
{
    area = a * b;
    cout << "Area of the rectangle is " << area << endl;
}

void Area ::Find_Area(double c)
{
    area = 3.14 * c * c;
    cout << "Area of the circle is " << area << endl;
}

int main()
{
    Area circle, rectangle, triangle;
    circle.Find_Area(3.34);
    rectangle.Find_Area(54.23, 67.23);
    triangle.Find_Area(3.34, 7.23, 12.76);

    return 0;
}