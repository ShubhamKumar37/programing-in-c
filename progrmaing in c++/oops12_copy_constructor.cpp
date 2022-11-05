#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int y)
    {
        a = y;
    }
    number(number &q) // Take the address of object and create a copy.
    {
        a = q.a;
        cout << "Copying constructor" << endl;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
    ~number() {}
};

int main()
{
    number s(420); //, t;
    s.display();
    number s2;
    s2.display();
    number t = s; // This is use to give the address of s to t through which above condtructor can invoke.
    t.display();
    return 0;
}