#include <iostream>

using namespace std;

class base2;
class base1
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    friend void swap(base1 &, base2 &);
    void display(void)
    {
        cout << "Value in base1 class is " << a << endl;
    }
};

class base2
{
    int b;

public:
    void setdata(int b)
    {
        this->b = b;
    }
    friend void swap(base1 &, base2 &);
    void display(void)
    {
        cout << "Value in base2 class is " << b << endl;
    }
};

void swap(base1 &a, base2 &b)
{
    /*  int temp=a.a;
     a.a=b.b;
     b.b=temp */
    ;
    a.a = a.a ^ b.b;
    b.b = a.a ^ b.b;
    a.a = a.a ^ b.b;
}

int main()
{
    base1 a;
    base2 b;
    a.setdata(234);
    b.setdata(56);
    a.display();
    b.display();
    swap(a, b);
    a.display();
    b.display();
    return 0;
}