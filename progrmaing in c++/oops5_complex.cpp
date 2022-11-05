#include <iostream>

using namespace std;

class complex
{
    int a, b;
    friend complex sumi(complex, complex);

public:
    void getitem(void)
    {
        cout << "Enter the value of a =";
        cin >> a;
        cout << "Enter the value of b =";
        cin >> b;
    }
};

complex sumi(complex o1, complex o2) // alternative also in oops8_parameterised_constructor.cpp
{
    cout << "Sum of the 2 complex number is " << (o1.a + o2.a) << "+" << (o1.b + o2.b) << "i" << endl;
} // complex o3;
  // o3.a=o1.a+o2.a;
  // o3.b=o1.b+o2.b;
  // return o3;

int main()
{
    complex s1, s2;
    s1.getitem();
    s2.getitem();
    sumi(s1, s2);
    return 0;
}