#include <iostream>

using namespace std;

class base
{
    float a;

public:
    base() {}
    base(float a)
    {
        this->a = a;
    }
    void operator+(void)
    {
        a = a + 2;
    }
    void operator-(void)
    {
        a = a - 2;
    }
    void operator*(void)
    {
        a = a * 2;
    }
    void operator++(void)
    {
        a = a / 2;
    }
    void display(void)
    {
        cout << "Value of a is " << a << endl;
    }
};

int main()
{
    base num(34.2);
    +num;
    num.display();
    -num;
    num.display();
    *num;
    num.display();
    ++num;
    num.display();
    return 0;
}