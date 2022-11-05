#include <iostream>

using namespace std;

class base
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    void display(void)
    {
        cout << "Value of a is " << a << endl;
    }
};

int main()
{
    base *ptr;
    base num;
    ptr = &num;
    num.setdata(234);
    num.display();

    ptr->setdata(10);
    ptr->display();
    (*ptr).display();

    return 0;
}