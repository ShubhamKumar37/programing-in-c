#include <iostream>
#include <stack>

using namespace std;

bool match(char a, char b)
{
    if ((a == ')' && b == '(') || (a == '}' && b == '{') || (a == ']' && b == '['))
    {
        return true;
    }
    return false;
}

bool checker(string &a)
{
    stack<char> b;
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            b.push(ch);
        }
        else
        {
            if (!b.empty())
            {
                char top = b.top();
                if (match(ch, top))
                {
                    b.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (b.empty())
    {
        return true;
    }
    else
        return false;
}

int main()
{
    stack<char> a;
    string b = "(){}[]({})";
    for (int i = 0; i < b.length(); i++)
    {
        a.push(b[i]);
    }
    cout << checker(b) << endl;
    return 0;
}