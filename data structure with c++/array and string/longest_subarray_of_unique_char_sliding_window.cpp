#include<iostream>
#include<string>
#include<map>

using namespace std;

int unique_subarray(string arr)
{
    int i=0,j=0;
    int maxn=INT_MIN;
    map <char,int> a;
    int s=0,e=0;
    while(j<arr.length())
    {
        a[arr[j]]++;
        if(a.size()==j-i+1)
        {
            maxn=max(maxn,j-i+1);
            s=i,e=j;
            j++;
        }
        else if(a.size()<j-i+1)
        {
            while(a.size()<j-i+1)
            {
                a[arr[i]]--;
                if(a[arr[i]]==0)
                {
                    a.erase(arr[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<endl<<"Indexing starts from 1";
    cout<<endl<<++s<<" , "<<++e<<endl;
    return maxn;
}

int main()
{
    string arr="abdhgdtsc";
    cout<<"Longest subarray of unique charectar is "<<unique_subarray(arr)<<endl;

    return 0;
}