#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter your age = ";
    cin >> a;
    if (a >= 18)
    {
        cout << "You can vote ";
    }
    else
    {
        cout << "You can not vote ";
    }
    return 0;
}