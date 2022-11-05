#include <iostream>
#include <string>

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

    a gettop(void);
    a pop(void);
    int ISP(char c);
    int ICP(char c);
    void size(void);
    void push(a num);
    void display(void);
    void intopostfix(char exp[40]);
    bool is_empty(void);
    bool is_full(void);
    ~stack() { delete arr; }
};

int main()
{
    char exp[] = "(A+B)*C-D";
    stack<char> a1(20);
    a1.intopostfix(exp);
    return 0;
}

template <class a>
a stack<a>::gettop(void)
{
    if (is_empty())
    {
        cout << "Stack is empty" << endl;
    }
    return arr[top];
}

template <class a>
void stack<a>::intopostfix(char *exp)
{
    int i = 0;
    a ch, x;
    stack<a> s(40);
    s.push('#');
    while (exp[i] != '\0')
    {
        ch = exp[i];
        i++;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            cout << ch;
        }
        else
        {
            if (ch == ')')
            {
                while (s.gettop() != '(')
                {
                    x = s.pop();
                    cout << x;
                }
                x = s.pop();
            }
            else
            {
                while (ICP(ch) <= ISP(s.gettop()))
                {
                    x = s.pop();
                    cout << x;
                }
                s.push(ch);
            }
        }
    }
    while (!s.is_empty())
    {
        x = s.pop();
        if (x != '#')
        {
            cout << x;
        }
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
    }
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
void stack<a>::size(void)
{
    cout << "Current size of the stack is " << top + 1 << endl;
}

template <class a>
void stack<a>::display(void)
{
    for (int i = 0; i < top + 1; i++)
    {
        cout << arr[i] << endl;
    }
}

template <class a>
int stack<a>::ISP(char c)
{
    switch (c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    case '(':
        return 0;
    case '#':
        return -2;
    }
}

template <class a>
int stack<a>::ICP(char c)
{
    switch (c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    case '(':
        return 4;
    }
}
