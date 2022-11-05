#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)//it working on some compiler.
    //Really really bad practice 
    {
        arr[i]=i;
        cout<<arr[i]<<endl;
    }
    return 0;
}