#include<iostream>
#include<string>

using namespace std;

string remove_sub(string &a,string &b)
{
    while(a.length()!=0 && a.find(b)<a.length())
    {
        a.erase(a.find(b),b.length());
    }
    return a;
}

int main()
{
    string a="my name is shubham",b="am";
    
    string c=remove_sub(a,b);
    for(int i=0;i<c.length();i++)
    {
        cout<<c[i];
    }

    return 0;
}