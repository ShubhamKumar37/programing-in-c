#include<iostream>

using namespace std;

class base
{
    int a;
    public:
    void setdata(int i){a=i;cout<<"Value in the constructor is "<<a<<endl;}
};

int main()
{
    base a,*ptr;
    ptr=&a;
    base *num=new base;
    //a.setdata(3);
    //(*ptr).setdata(34);
    ptr->setdata(334234);
    num->setdata(89);
    return 0;
}