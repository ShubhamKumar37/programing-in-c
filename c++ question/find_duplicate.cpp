#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,3},sum=0;
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++)
    {
        sum=sum ^arr[i];
    }
    for(int i=1;i<n;i++)
    {
        sum=sum^i;
    }
    cout<<"Duplicate number is "<<sum<<endl;

    return 0;
}