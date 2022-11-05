#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    int i,res=0;
    for(i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    cout<<res<<endl;
    return 0;
}