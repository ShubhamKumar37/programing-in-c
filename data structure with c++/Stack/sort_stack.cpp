#include <iostream>
#include <stack>

using namespace std;

void swaps(stack<int> &a, int n)
{
    if (a.empty() || (!a.empty() && n > a.top()))
    {
        a.push(n);
        return;
    }
    int val = a.top();
    a.pop();
    swaps(a, n);
    a.push(val);
}

void sort(stack<int> &a)
{
    if (a.empty())
    {
        return;
    }
    int val = a.top();
    a.pop();
    sort(a);
    swaps(a, val);
}

int main()
{
    stack<int> a;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter the element =";
        cin >> num;
        a.push(num);
    }
    cout << "Working" << endl;
    sort(a);
    for (int i = 0; i < n; i++)
    {
        cout << a.top() << endl;
        a.pop();
    }
    return 0;
}