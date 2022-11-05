#include <iostream>

using namespace std;

int main()
{
    int n, i, t = 1;
    cout << "Enter the number = ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            t = 0;
            break;
        }
    }
    if (t == 0)
    {
        cout << "No is not prime !!!!!!!! ";
    }
    else
    {
        cout << "No is a prime **********";
    }
    return 0;
}