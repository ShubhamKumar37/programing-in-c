#include <iostream>

using namespace std;

template <class a1, int a>

class base
{
public:
    a1 arr[a];
};

int main()
{
    base<int, 234> a;
    base<float, 4> b;
    cout << sizeof(a.arr) / sizeof(int) << endl;
    cout << sizeof(b.arr) / sizeof(int) << endl;
    return 0;
}