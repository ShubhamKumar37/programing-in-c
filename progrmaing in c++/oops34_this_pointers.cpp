#include<iostream>

using namespace std;

class base
{
    int a;
    public:
    base(){}
    base(int a)
    {
        this->a=a;
    }
    base &check(base &x)
    {
        if(x.a >18)
        {
            return x;
        }
        else{return *this;}
    }
    void display(void)
    {
        cout<<"Value of a is "<<a<<endl;
    }
};

int main()
{
    base a(12),b(4),p;
    p=b.check(a);
    p.display();

    return 0;
}