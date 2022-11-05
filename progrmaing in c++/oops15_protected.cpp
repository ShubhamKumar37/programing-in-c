#include <iostream>

using namespace std;

class base
{
protected:
    int a = 10;

private:
    int b = 30;

public:
    int c = 50;
    int setpri()
    {
        return b;
    }
    int setpro()
    {
        return a;
    }
    void display()
    {
        cout << "Protected variable in base class is " << a << endl;
        cout << "Private variable in base class is " << b << endl;
        cout << "Public variable in base class is " << c << endl;
    }
};

class derived : protected base
{
public:
    void print()
    {
        cout << "Protected variable in derived class is " << a << endl;
        cout << "Private variable in derived class is " << setpri() << endl;
        cout << "Public variable in derived class is " << c << endl;
    }
};

// int main()
// {
//     base v1;
//     derived v2;
//     v1.display();
//     // v2.display();
//     v2.print();
//     cout << "Protected variable is " << v1.setpro() << endl; // v1.a replaced in public vivsibility
//     cout << "Private variable is " << v1.setpri() << endl;
//     cout << "Public variable is " << v1.c << endl;
//     v2.print();
//     // cout << "Protected variable from derived is " << v2.a << endl;
//     // cout << "Private variable from derived is " << v2.setpri() << endl;
//     // cout << "Public variable from derived is " << v2.c << endl;
//     return 0;
// }
// In protected visibility the data member of the base class became
// protected and cann't be used in main() function.
// It will give a compile error.