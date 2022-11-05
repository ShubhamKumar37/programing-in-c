#include <iostream>

using namespace std;

void natural_num(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl; // This is tail recursion (before recursive call)

    // recusive relation
    natural_num(n - 1);

    // cout<<n<<endl; //This is head recursion (after recursive call)
}

int main()
{
    int n = 4;

    natural_num(n);

    return 0;
}