#include <iostream>

using namespace std;

long long fact(int a)
{
    if (a <= 1) return 1;
    return a * fact(a - 1);
}

int main()
{
    int n = 11;
    cout << "Factorial of number " << n << " is " << fact(n) << endl;
    return 0;
}