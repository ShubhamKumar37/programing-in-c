#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a = 16;
    int b = 24;

    cout << "GCD of both number is " << gcd(a, b) << endl;
    cout << "LCM of both number is " << a * b / gcd(a, b) << endl;

    return 0;
}