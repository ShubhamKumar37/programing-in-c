#include<iostream>

using namespace std;

void reverse_alt(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            //swap(arr[i],arr[i+1]);
            arr[i]=arr[i]^arr[i+1];
            arr[i+1]=arr[i]^arr[i+1];
            arr[i]=arr[i]^arr[i+1];
        }
    }
}

int main()
{
    int arr[]={1,3,5,4,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    reverse_alt(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}