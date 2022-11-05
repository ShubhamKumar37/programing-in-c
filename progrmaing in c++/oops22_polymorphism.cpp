#include<iostream>

using namespace std;

class base 
{
    public:
    int a=0;
    void display(void)
    {
        cout<<"Value in base class is "<<a<<endl;
    }
};

class derived : public base
{
    public:
    int b;
    void display(void)
    {
        cout<<"Value in derieved class is "<<b<<endl;
        cout<<"Value in base class is "<<a<<endl;
    }
};

int main()
{
    base *a;
    derived d,*c,e;
    a=&d;
    c=&e;
    a->a=234;
    a->display();
    //c->a=43;
    c->b=65;
    c->display();

    return 0;
}