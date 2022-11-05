#include<iostream>
#include<string>

using namespace std;

char get_max(string a,int n)
{
    int t[27]={0};
    for(int i=0;i<n;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            t[a[i]-'a']+=1;
        }
        else if(a[i]==' ')
        {
            t[26]+=1;
        }
        else
        {
            t[a[i]-'A']+=1;
        }
    }
    int maxi=-1;
    int ind=0;
    for(int i=0;i<27;i++)
    {
        if(maxi < t[i])
        {
            ind =i;
            maxi=t[i];
        }
    }
    return ind==26?'_':ind+'a';
}

int main()
{
    string a="output";
    int n=a.length();
    cout<<"Maxium occurance of char is "<<get_max(a,n)<<" --- "<<endl;
}