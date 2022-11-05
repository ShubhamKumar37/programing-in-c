#include <iostream>
#include <math.h>

using namespace std;

class Power
{
    double m;
    int n;
    double sq;

public:
    Power(double m = 1, int n = 1) // Deafult value of m and n.
    {
        this->m = m;
        this->n = n;
    }
    void Find_Power(void)
    {
        sq = pow(m, n);
    }
    void Display_Power(void)
    {
        cout << m << " to power " << n << " is " << sq << endl;
    }
    ~Power(){}
};

int main()
{
    Power a(4, 5), b(4), c;
    a.Find_Power();
    b.Find_Power(); // Default value is 1.
    c.Find_Power(); // Both are deafult value.
    a.Display_Power();
    b.Display_Power();
    c.Display_Power();
    return 0;
}