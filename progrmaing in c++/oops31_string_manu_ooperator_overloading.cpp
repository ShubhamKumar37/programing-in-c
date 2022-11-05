#include <iostream>
#include <cstring>

using namespace std;

class st
{
    char *p;
    int len;

public:
    st() { p = 0, len = 0; }
    st(const char *a)
    {
        len = strlen(a);
        p = new char[len + 1];
        strcpy(p, a);
    }
    friend st operator+(const st &a, const st &b);
    void display(void)
    {
        cout << p << endl;
    }
    friend int operator<=(st &, st &);
};

st operator+(const st &a, const st &b)
{
    st temp;
    temp.len = a.len + b.len;
    temp.p = new char[temp.len + 1];
    strcpy(temp.p, a.p);
    strcat(temp.p, b.p);
    return temp;
}

int operator<=(st &a, st &b)
{
    int m = strlen(a.p);
    int n = strlen(b.p);
    if (m <= n)
        return 1;
    else
        return 0;
}

int main()
{
    st a = "Sham", b = " Kumar", c;
    a.display();
    b.display();
    c = a + b;
    c.display();
    if (a <= b)
        b.display();
    else
        a.display();
    return 0;
}