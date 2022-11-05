#include<iostream>
#include<stack>

using namespace std;

void display(stack <int> a)
{
    if(!a.empty())
    {
        int x=a.top();
        a.pop();
        cout<<x<<endl;
        display(a);
    }
}

int main()
{
    stack <int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    cout<<a.empty()<<endl;
    display(a);
    return 0;
}