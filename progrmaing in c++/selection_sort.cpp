#include<iostream>

using namespace std;

int main()
{
    int arr[]={4,3,5,6,3,56,2,3};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        int minid=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minid]>arr[j])
            {
                minid=j;
            }
        }
        swap(arr[i],arr[minid]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}