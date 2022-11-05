#include<iostream>

using namespace std;

class base1
{
    public:
    int a;
    void display(void)
    {
        cout<<"Value in base1 is "<<a<<endl;
    }
};

class base2
{
    public:
    int b;
    void display(void)
    {
        cout<<"Value in base2 is "<<b<<endl;
    }
};

class derived : public base1 , public base2
{
    public:
    int c;
    void display(void)
    {
        cout<<"Value in derived is "<<c<<endl;
    }
};

int main()
{
    base1 *a;
    base2 *c;
    derived *e,b;
    a=&b;
    c=&b;
    e=&b;
    a->a=23;
    a->display();
    c->b=546;
    c->display();
    e->c=7657;
    e->display();

    return 0;
}