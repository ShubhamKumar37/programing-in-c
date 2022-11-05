#include<iostream>

using namespace std;

class base
{
    int a,b;
    public:
    base(int a,int b)
    {
        this->a=a,this->b=b;
    }
    void sum(int a)
    {
        cout<<"Sum of the entered number is "<<a+b<<endl;
    }
    void sum(void)
    {
        cout<<"Subtraction of the entered number is "<<a-b<<endl;
    }
};

int main()
{
    base a(3,5);
    a.sum();

    return 0;
}