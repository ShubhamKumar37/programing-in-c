#include <iostream>

using namespace std;

class base
{
    int a;

public:
    base() {}
    base(int a)
    {
        this->a = a;
    }
    friend ostream &operator<<(ostream &, base &);
    friend istream &operator>>(istream &, base &);
};

ostream &operator<<(ostream &o, base &t)
{
    o << "Value of a is " << t.a << endl;
    return o;
}

istream &operator>>(istream &i, base &t)
{
    cout << "Enter the value of a = ";
    i >> t.a;
    return i;
}

int main()
{
    base a(23), b;
    cout << a;
    cin >> b;
    cout << b;
    return 0;
}