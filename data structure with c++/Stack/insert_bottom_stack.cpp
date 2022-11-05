#include <iostream>
#include <stack>

using namespace std;

void insert_val(stack<int> &a, int x)
{
    if (a.empty())
    {
        a.push(x);
        return;
    }
    int val = a.top();
    a.pop();
    insert_val(a, x);
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
    insert_val(a, 5);
    for (int i = 0; i < n + 1; i++)
    {
        cout << a.top() << endl;
        a.pop();
    }
    return 0;
}