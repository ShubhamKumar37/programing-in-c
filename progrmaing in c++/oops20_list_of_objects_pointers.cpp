#include<iostream>

using namespace std;

class shop
{
    int id,price;
    string name;
    public:
    void setdata(int a,int b,string v)
    {
        id=a,price=b,name =v;
    }
    void printdata(void)
    {
        cout<<"Name of the item is "<<name<<endl;
        cout<<"Id of the item is "<<id<<endl;
        cout<<"Price of the item is "<<price<<endl;
    }
};

int main()
{
    shop *ptr=new shop [2];
    shop *num=ptr;
    int i,a,b;
    string n;
    for (i=0;i<2;i++)
    {
        cout<<"Enter the name of the item = ";
        cin>>n;
        cout<<"Enter the id of the item = ";
        cin>>a;
        cout<<"Enter the price of the item = ";
        cin>>b;
        ptr->setdata(a,b,n);
        ptr++;
    }
    for(i=0;i<2;i++)
    {
        num->printdata();
        num++;
    }
    return 0;
}