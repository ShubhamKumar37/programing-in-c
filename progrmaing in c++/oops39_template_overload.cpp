#include<iostream>

using namespace std;

template <class a1>

class base
{
    a1 a;
    public:
    base(a1 a)
    {
        this->a=a;
    }
    //void display(void);
};

void display(int a)
{
    cout<<"Value of a is "<<a<<endl;
}

template <class a1> //Must add this before using overloading.
void display(a1 a)
{
    cout<<"Value of a is "<<a<<" in template "<<endl;
}

int main()
{
    base <int> a(123);
    display(2.23);

    return 0;
}