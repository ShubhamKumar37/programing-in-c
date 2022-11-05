#include <iostream>

using namespace std;

class base
{
    int a, b;

public:
    base(){}
    base(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display(void)
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
    void operator+()
    {
        a = -a, b = -b;
    }
    friend void operator-(base &);
    base operator*(void)
    {
        base t;
        t.a = a * a;
        t.b = b * b;
        return t;
    }
};

void operator-(base &t)
{
    t.a = -t.a;
    t.b = -t.b;
}
/* base :: operator*(base &y)
{
    base t;
    t.a = y.a * y.a;
    t.b = y.b * y.b;
    return t; 
} */

int main()
{
    base num(3, 4), temp(6, 23), c(2, 3),t;
    num.display();
    temp.display();
    c.display();
    t.display();
    +num;
    -temp;
    t=*c;
    num.display();
    temp.display();
    c.display();
    t.display();
    return 0;
}

// OPERATOR CAN BE USED IN OPERATOR OVERLOADING.
/* ! (logical NOT)

& (address-of)

~ (complement)

* (pointer dereference)

+ (unary plus)

- (unary negation)

++ (prefix increment) or (postfix increment)

-- (prefix decrement) or (postfix decrement) */