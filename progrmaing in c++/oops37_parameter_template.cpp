#include<iostream>
#include<typeinfo>

using namespace std;

template <class a,class b,class c>

class base
{
    a a1;
    b b1;
    c c1;
    public:
    base(a a1,b b1,c c1)
    {
        this->a1=a1;this->b1=b1;this->c1=c1;
    }
    void display(void)
    {
        cout<<"First parameter is type of "<<typeid(this->a1).name()<<" and the value is "<<a1<<endl;
        cout<<"Second parameter is type of "<<typeid(this->b1).name()<<" and the value is "<<b1<<endl;
        cout<<"Third parameter is type of "<<typeid(this->c1).name()<<" and the value is "<<c1<<endl;
    }
};

int main()
{
    base <int ,float,char> a(12,403.223,'L');
    a.display();

    return 0;
}