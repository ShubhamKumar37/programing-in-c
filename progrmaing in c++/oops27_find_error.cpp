#include <iostream>

using namespace std;

class cube
{
    int l, b, w;

public:
    cube() : l(10), b(10), w(10) {}
    cube(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    void display()
    {
        cout << "Working" << endl;
    }
};

int main()
{
    cube a, b(2, 3), c = cube(2, 4);
    //cube b(3,54); error
    //cube d=b; coping value
    //cube e=d;
    //cube  (cube f);  error
    //cube  (cube *f); error
    //cube (const cube &f); error
    cube (const cube *f); error
    
    a.display(), b.display(), c.display(),f.display();
    return 0;
}
/*
class dy
{
    int *p;

public:
    dy()
    {
        p = int;
        *p = 10;
    }
    dy(int u)
    {
        p = int;
        *p = u;
    }
    void display(void)
    {
        cout << "Value of p is " << *p << endl;
    }
};

int main()
{
    dy a(34), b;
    a.display();
    b.display();
    return 0;
}

class dem
{
    static int c;
    int data;

public:
    dem(int a)
    {
        data = a;
        c++;
    }
    ~dem()
    {
        c--;
    }
    void display(void)
    {
        cout << "Value of data is " << data << endl;
    }
    static void fun(dem &n)
    {
        dem temp(n.data);
        temp.display();
        n.display();
    }
};

int dem::c;

int main()
{
    dem a(323);
    a.display();
    dem::fun(a);
    // a.fun(a);
    a.display();
    dem b(65);
    a.display();
    b.display();
    return 0;
}*/