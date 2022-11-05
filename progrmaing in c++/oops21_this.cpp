#include <iostream>

using namespace std;

class base
{
    int a, b;

public:
    // base &setdata(int a,int b)
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
        // return *this;
    }
    void display(void)
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    base a;
    a.setdata(34, 123); //.display();
    a.display();
    return 0;
}