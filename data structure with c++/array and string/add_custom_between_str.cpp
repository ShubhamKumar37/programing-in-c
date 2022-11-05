#include<iostream>
#include<string>

using namespace std;

void space_rem(string a)
{
    string temp;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==' ')
        {
            temp.push_back('_');
            temp.push_back('_');
            temp.push_back('_');
        }
        else
        {
            temp.push_back(a[i]);
        }
    }
    for(int i=0;i<temp.length();i++)
    {
        cout<<temp[i];
    }
    cout<<endl;
}

int main()
{
    string a="hi this video is sponserved by skill clash";
    space_rem(a);

    return 0;
}