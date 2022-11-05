#include <iostream>
#include <stack>

using namespace std;

void reverse(stack<int> &a)
{
    if (a.empty())
    {
        return;
    }
    int val = a.top();
    a.pop();
    reverse(a);
    a.push(val);
}

int main()
{
    stack<int> a;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        a.push(2 + i * 2 + 5);
    }
    cout << "Working" << endl;
    reverse(a);
    for (int i = 0; i < n; i++)
    {
        cout << a.top() << endl;
        a.pop();
    }
    return 0;
}