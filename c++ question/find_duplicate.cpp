#include<iostream>

using namespace std;

int main()
{
    int arr[]={5, 4, 2, 4, 1},sum=0;
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++)
    {
        sum=sum ^ arr[i];
        // cout << sum << " ";
    }
    // cout << endl;
    for(int i=1;i<=n;i++)
    {
        sum=sum^i;
        // cout << sum << " ";
    }
    cout << endl;
    cout<<"Duplicate number is "<<sum<<endl;

    return 0;
}