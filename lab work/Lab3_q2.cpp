#include <iostream>

using namespace std;

class Complex
{
    int Real;
    int Imag;

public:
    Complex() {}
    Complex(int a)
    {
        Real = a;
        Imag = a;
    }
    Complex(int a, int b)
    {
        Real = a;
        Imag = b;
    }
    void display(void)
    {
        cout << "Final complex number will be " << Real
             << " + " << Imag << "j" << endl;
    }
};

int main()
{
    Complex a, b(5), c(6, 2);

    a.display();
    b.display();
    c.display();

    return 0;
}