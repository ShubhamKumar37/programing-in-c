#include<iostream>

using namespace std;

bool is_sorted(int arr[],int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<=arr[i])
        {
            c++;
        }
    }
    if(arr[n-1]>=arr[0])
    {
        c++;
    }
    return c==n?true:false;
}

int main()
{
    int arr[]={1,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    bool a=is_sorted(arr,n);
    cout<<a<<endl;

    return 0;
}