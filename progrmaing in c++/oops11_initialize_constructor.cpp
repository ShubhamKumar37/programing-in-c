/* #include <iostream>

using namespace std;

class bank
{
    int amount, y, per, ret;

public:
    bank() {}
    bank(int a, int b, int c);
    bank(int a, int b, float c);
    void print();
};

bank ::bank(int a, int b, float c)
{
    amount = a, y = b, per = c, ret = amount;
    for (int i = 0; i < y; i++)
    {
        ret = ret * (1 + c);
    }
}
bank ::bank(int a, int b, int c)
{
    amount = a, y = b, per = (float)(c / 100), ret = amount;
    for (int i = 0; i < y; i++)
    {
        ret = ret * (1 + (float)(c / 100));
    }
}

void bank ::print()
{
    cout << "After " << y
         << " years you got " << ret << endl;
}

int main()
{
    bank m1, m2;
    int a, b, c;
    float r;
    cout << "Enter the amount , year and percentage of intrest = ";
    cin >> a >> b >> c;
    m1 = bank(a, b, c);
    m1.print();
    cout << "Enter the amount , year and percentage of intrest = ";
    cin >> a >> b >> c;
    m2 = bank(a, b, r);
    m2.print();
    return 0;
} */

#include <iostream>

using namespace std;

class Value
{
    float a, b;

public:
    Value() {} // This is created to create a object which can be initialize later in the main() function
    Value(float, int);
    Value(float, float);
    void print(void)
    {
        cout << "The value will be " << a << " * 10 ^ "
             << b << endl;
    }
};

Value ::Value(float a, int b)
{
    this->a = a;
    this->b = (float)b;
}
Value ::Value(float a, float b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    Value a(23, 5), t; // This object "t" can be initialize later.
    a.print();
    return 0;
}