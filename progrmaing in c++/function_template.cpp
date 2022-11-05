#include <iostream>

using namespace std;
template <class a1>
void sw(a1 &a, a1 &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void fun(int a, int b)
{
    cout << "Before swap and b are " << a << " , " << b << endl;
    sw(a, b);
    cout << "After swap and b are " << a << " , " << b << endl;
}

int main()
{
    fun(10, 20);

    return 0;
}