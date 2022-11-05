#include <iostream>

using namespace std;

void factorial(int a)
{
    long long int mod = 1e9 + 7;
    int n = 1;
    for (int i = 1; i <= a; i++)
    {
        n = (n * i % mod) % mod;
    }
    cout << n << " ";
}

int main()
{
    int n = 10;

    factorial(n);

    return 0;
}