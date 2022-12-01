#include <iostream>

using namespace std;

template <class a = int>

class stack
{
    a *arr;
    int top;
    int maxs;

public:
    stack(int s)
    {
        maxs = s;
        arr = new a[s];
        top = -1;
    }
    bool is_empty(void);
    bool is_full(void);
    void size(void);
    void push(a num);
    a pop(void);
    void display(void);
};

int main()
{
    stack arr(5);
    arr.push(12);
    arr.push(42);
    arr.push(52);
    arr.push(32);
    int x;
    x=arr.pop();
    cout<<x<<endl;
    x=arr.pop();
    cout<<x<<endl;
    x=arr.pop();
    cout<<x<<endl;
    x=arr.pop();
    cout<<x<<endl;
    // arr.size();
    // arr.push(12);
    // arr.push(34);
    // arr.push(56);
    // arr.size();

    // cout << arr.pop() << endl;
    // arr.pop();
    // arr.size();

    // arr.display();

    // stack<float> temp(2);
    // temp.size();
    // // temp.pop();
    // temp.push(234.1);
    // temp.push(76.2);
    // temp.push(230.4);
    // // temp.pop();

    // temp.display();
    return 0;
}

template <class a>
bool stack<a>::is_empty(void)
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

template <class a>
bool stack<a>::is_full(void)
{
    if (top == maxs - 1)
    {
        return true;
    }
    return false;
}

template <class a>
void stack<a>::size(void)
{
    cout << "Current size of the stack is " << top + 1 << endl;
}

template <class a>
void stack<a>::push(a a1)
{
    if (!is_full())
    {
        arr[++top] = a1;
    }
    else
    {
        cout << "You cann't push another element " << endl;
        cout << "Stack is full!!!!" << endl;
    }
}
template <class a>
a stack<a>::pop(void)
{
    if (!is_empty())
    {
        return arr[top--];
    }
    else
    {
        cout << "You cann't pop another element " << endl;
        cout << "Stack is empty!!!!" << endl;
        return -1;
    }
}
template <class a>
void stack<a>::display(void)
{
    for (int i = 0; i < top + 1; i++)
    {
        cout << arr[i] << endl;
        // arr.pop();
    }
}