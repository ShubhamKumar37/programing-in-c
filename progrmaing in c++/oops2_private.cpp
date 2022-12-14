/* #include <iostream>

using namespace std;
class Employee
{
private:
    int salary;

public:
    int r_no;
    string name;
    void pri(int salary);
    void printdetail()
    {
        cout << "Roll number of the student is " << r_no << endl;
        cout << "Name of the student is " << name << endl;
    }
};
void Employee ::pri(int salary1)
{
    int salary = salary1;
    cout << "Salary of the student is " << salary << endl;
}

int main()
{
    Employee s1, s2;
    s1.r_no = 101;
    s1.name = "shubham";
    s1.printdetail();
    s1.pri(235);
    return 0;
} */

#include<iostream>

using namespace std;

void get(void)
{
    cout<<"Running "<<endl;
}

class base
{
    int salary;
    public:
    void sum1(void)
    {
        get();
    }
    void setdata(int a)
    {
        salary=a;
    }
    void printsal(void);
};

void base:: printsal(void)
{
    cout<<"Salary of the employee is "<<salary<<endl;
}

int main()
{
    base a;
    a.sum1();
    a.setdata(23423);
    a.printsal();
    return 0;
}