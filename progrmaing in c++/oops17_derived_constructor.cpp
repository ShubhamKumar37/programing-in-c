#include <iostream>

using namespace std;

class base1
{
    int a;

public:
    base1(int i)
    {
        a = i;
        cout << "Base 1 constructor is executed here " << endl;
    }
    void print1(void)
    {
        cout << "Value in constructor is " << a << endl;
    }
};

class base2
{
    int b;

public:
    base2(int i)
    {
        b = i;
        cout << "Base 2 constructor is executed here " << endl;
    }
    void print2(void)
    {
        cout << "Value in constructor is " << b << endl;
    }
};

class derived : public base1, public base2  // base1 constructor will execute first
                                            // if virtual class is present then it give get the priority.
                                            // if more virtual class is present then the order will be followed.
{
    int d;

public:
    derived(int a, int b, int c) :  base2(b),base1(a) // Use to run constructor.
    {
        d = c;
        cout << "Derived constructor is executed here " << endl;
    }
    void print3(void)
    {
        cout << "Value in constructor is " << d << endl;
    }
};

int main()
{
    derived s1(104, 101, 107);
    s1.print1();
    s1.print2();
    s1.print3();
    return 0;
}