#include <iostream>

using namespace std;

template <class a1 = int, class b1 = float>

class base
{
    a1 a;
    b1 b;

public:
    base(a1 a, b1 b)
    {
        this->a = a;
        this->b = b;
    }
    void display(void)
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    base<> a(234, 1.12);
    a.display();
    base<float, int> b(234.23, 23.4);
    b.display();
    // base <,int> c(234,12); Generate error.
    base<int, int> c(234, 12);
    c.display();
    return 0;
}