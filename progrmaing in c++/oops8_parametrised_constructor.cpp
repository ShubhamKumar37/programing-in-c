/* #include <iostream>
#include <cmath>

using namespace std;

class point
{
    int x, y;
    friend void printdist(point, point);

public:
    point(int a, int b)
    {
        x = a, y = b;
    }
};

void printdist(point n, point p)
{
    cout << "Distance between 2 points is " << sqrt(pow((n.x - p.x), 2) + pow((n.y - p.y), 2)) << endl;
}
int main()
{
    point a(0, 1), b(0, 6);
    printdist(a, b);
    return 0;
} */

#include "iostream"
#include <cmath>

using namespace std;

class dist
{
    int x, y;

public:
    dist(int *a, int b)
    {
        x = *a, y = b;
    }
    friend void print(dist, dist);
};

void print(dist a, dist b)
{
    cout << "Distance between these points is " << sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2)) << endl;
}

int main()
{
    int c = 0;
    dist a(&c, 0), b(&c, 5);
    print(a, b);
    return 0;
}