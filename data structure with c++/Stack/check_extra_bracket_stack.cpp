#include<iostream>
#include<stack>

using namespace std;

bool check(string &s)
{
    stack <char> a;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(' ||ch=='-' ||ch=='+' ||ch=='/'||ch=='*')
        {
            a.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool red=true;
                while(a.top()!='(')
                {
                    if(a.top()=='+'||a.top()=='*'||a.top()=='-'||a.top()=='/')
                    {
                        red=false;
                    }
                    a.pop();
                }
                if(red==true)
                {
                    return false;
                }
                a.pop();
            }
        }
    }
    return true;
}
int main()
{
    string s="(a*(s))";
    cout<<check(s)<<endl;
    return 0;
}