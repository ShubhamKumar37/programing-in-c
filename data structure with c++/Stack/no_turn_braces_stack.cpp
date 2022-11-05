#include <iostream>
#include <stack>

using namespace std;

int no(string a)
{
    stack<char> s;
    if (a.length() % 2 == 1)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            char ch = a[i];
            if (ch == '(')
            {
                s.push(ch);
            }
            else
            {
                if (!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    s.push(ch);
                }
            }
        }
        int a = 0, b = 0;
        while (!s.empty())
        {
            if (s.top() == '(')
            {
                a++;
            }
            else
            {
                b++;
            }
            s.pop();
        }
        return ((a + 1) / 2 + (b + 1) / 2);
    }
}

int main()
{
    string s = ")()(()";
    cout << "No of braces need to turn is " << no(s) << endl;
    return 0;
}