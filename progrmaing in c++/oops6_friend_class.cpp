/* #include <iostream>

using namespace std;

class complex;
class calc
{
public:
    int addr(complex, complex);
    int addi(complex, complex);
};
class complex
{
    int a, b;

public:
    void getdata(int t, int q)
    {
        a = t, b = q;
    }
    friend int calc ::addr(complex, complex);
    friend int calc ::addi(complex, complex);
    // friend complex; allow full access of private member from given class
};

int calc ::addr(complex q1, complex q2)
{
    return (q1.a + q2.b);
}
int calc ::addi(complex a1, complex a2)
{
    return (a1.b + a2.b);
}

int main()
{
    complex s1, s2;
    calc l1;
    int sum;
    s1.getdata(1, 4);
    s2.getdata(2, 3);
    sum = l1.addr(s1, s2);
    cout << "Sum of the 2 real part is " << sum << endl;
    sum = l1.addi(s1, s2);
    cout << "Sum of the 2 imaginary part is " << sum << endl;
    return 0;
} */

//#include <iostream>
#include "iostream"

using namespace std;

class base
{
    int a, salary;

public:
    void setid(int b, int sal)
    {
        b = a, salary = sal;
    }
    friend void setsal(base);
};

void setsal(base sal1)
{

    cout << "Salary of the employee is " << sal1.salary << endl;
}

int main()
{
    base q;
    q.setid(23, 23423423);
    setsal(q);
    return 0;
}