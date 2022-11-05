#include<iostream>
#include<stack>

using namespace std;

void delete_mid(stack <int> &a,int n,int c)
{
    if(n/2==c)
    {
        a.pop();
        return ;
    }
    int num=a.top();
    a.pop();
    delete_mid(a,n,c+1);
    a.push(num);
}

int main()
{
    stack <int> a;
    a.push(12);
    a.push(22);
    a.push(42);
    a.push(62);
    // a.push(72);
    int c=0;
    delete_mid(a,a.size(),c);
    for (int i = 0; i < a.top() ; i++)
    {
        cout << a.top() << endl;
        a.pop();
    }
    return 0;
}