/* #include <iostream>

using namespace std;

class Employee
{
public:
    int r_no;
    int fee;
    void printdetail(int r_no)
    {
        cout << "Roll number of the student is " << r_no << endl;
    }
};

int main()
{
    Employee shubham;
    shubham.r_no = 101;
    shubham.printdetail(shubham.r_no);
    return 0;
} */

#include <iostream>

using namespace std;

class base
{
    int a, b;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display(void)
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    base t;
    t.setdata(423, 563);
    t.display();
    return 0;
}