#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int x = 0, int y = 0) // deafult argument in class constructor.
    {
        a = x, b = y;
    }
    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex a(4, 7), b(3), c(0, 2);
    a.print();
    b.print();
    c.print();
    return 0;
}