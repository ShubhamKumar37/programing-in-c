#include<iostream>

using namespace std;

//class rec;
class rec
{
    int length ,breath,area;
    public:
    rec(){}
    rec(int length,int breath)
    {
        this->length=length;   
        this->breath=breath;   
        area=length*breath;
    }
    void display(void)
    {
        cout<<"Length of the triangle is "<<length<<endl;
        cout<<"Breath of the triangle is "<<breath<<endl; 
        cout<<"Area of the rectangle is "<<area<<endl;
    }
};
class tri
{
    int base,height;
    float area;
    public:
    tri(){}
    tri(int height,int base)
    {
        this->base=base;  
        this->height=height;  
        area=base*height;
    }
    void display(void)
    {
        cout<<"Height of the triangle is "<<height<<endl;
        cout<<"Base of the triangle is "<<base<<endl;
        cout<<"Area of the triangle is "<<area<<endl;
    }
    operator rec()
    {
        rec temp(height,base);
        return temp;
    }
};


int main()
{
    rec a(5,6),c;
    a.display();
    cout<<"Size of object is "<<sizeof(a)<<" "<<sizeof(int)<<endl;

    tri b(2,2),d;
    b.display();
    c=b;
    //d=a;
    c.display();
    //d.display();
    return 0;
}