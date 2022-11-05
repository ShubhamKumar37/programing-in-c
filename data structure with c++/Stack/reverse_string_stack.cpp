#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <char> a;
    string b="Shubham is a great boy";
    string c="";
    for(int i=0;i<b.size();i++)
    {
        a.push(b[i]);
    }
    while(!a.empty())
    {
        c.push_back(a.top());
        a.pop();
    }
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]; 
    }
    return 0;
}