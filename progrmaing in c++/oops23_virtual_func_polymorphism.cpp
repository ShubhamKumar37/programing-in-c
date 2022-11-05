#include <iostream>

using namespace std;

class base
{
    int a = 323;

public:
    virtual void display(void)
    {
        cout << "Value in base class is " << a << endl;
    }
};

class derived : public base
{
    int b = 34232;

public:
    void display(void)
    {
        cout << "Value in derived class is " << b << endl;
    }
};

int main()
{
    base *a,b;
    derived t;
    a = &t;
    a->display();
    b.display();

    return 0;
}