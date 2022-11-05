#include <iostream>

using namespace std;

class count
{
    int a = 0;

public:
    count()
    {
        a++;
        cout << "Here the constructor is called and number is " << a << endl;
    }
    ~count() //"~"  This is used to create destructor.
    {
        a--;
        cout << "Here the destructor is called and the number is " << a << endl;
    }
};

int main()
{
    count a;
    return 0;
}