#include <iostream>

using namespace std;

class base
{
    int a;
    int b;

public:
    base(int i, int w) : a(i), b(w) // The first variable will be initialize first
                                    // if not it will generate garbage value.
    {
        cout << "Value of a and b is " << a << " , " << b << endl;
    }
};

int main()
{
    base s1(2, 5);
    return 0;
}