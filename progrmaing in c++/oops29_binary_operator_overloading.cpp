#include <iostream>

using namespace std;

class com
{
    int a, b;

public:
    com() {}
    com(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend com operator+(com, com);
    void display(void);
};

void com ::display(void)
{
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
}

com operator+(com t, com n)
{
    com temp;
    temp.a = t.a + n.a;
    temp.b = t.b + n.b;
    return temp;
}

int main()
{
    com a(3, 5), b(6, 8), c;
    int t = 23, r = 765, n;
    a.display();
    b.display();
    c = a + b;
    n = t + r;
    cout << n << endl;
    c.display();
    return 0;
}