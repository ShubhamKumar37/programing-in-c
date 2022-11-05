#include <iostream>

using namespace std;

template <class a, class b>

float sum(a a1, b b1)
{
    return a1 + b1;
}

int main()
{
    float a = sum(234, 34.23);
    cout << "Sum of 2 number is " << a << endl;
    return 0;
}