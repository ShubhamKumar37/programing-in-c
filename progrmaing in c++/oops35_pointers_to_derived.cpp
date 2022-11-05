#include <iostream>

using namespace std;

class base
{
public:
    int a;
    void display(void)
    {
        cout << "Value in base class a is " << a << endl;
    }
    virtual void show(void)
    {
        cout << "This is base class " << endl;
    }
};

class derived : public base
{
public:
    int b;
    void display(void)
    {
        cout << "Value in base class a is " << a << endl;
        cout << "Value in derived class b is " << b << endl;
    }
    void show(void)
    {
        cout << "This is derived class " << endl;
    }
};

int main()
{
    derived b;
    base *a = &b;

    a->a = 234;
    a->display();
    /* a->b=2364;   This will throw an error because pointer is
    of base class not of derived class */
    a->show();

    derived *temp = &b;
    temp->b = 789;
    temp->display();
    temp++;
    temp->display();
    /* temp->base::display(); // Invoke function of base class */
    a->show();

    return 0;
}