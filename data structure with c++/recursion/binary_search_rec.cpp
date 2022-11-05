#include<iostream>

using namespace std;

int Binary_Search(int Arr[],int S,int E,int Key)
{
    if(S>E)
    {
        return -1;
    }
    int mid=(S+E)>>1;
    if(Arr[mid]==Key)
    {
        return mid;
    }
    else if (Arr[mid]<Key)
    {
        return Binary_Search(Arr,mid+1,E,Key);
    }
    else
    {
        return Binary_Search(Arr,S,mid-1,Key);
    }
}

int main()
{
    int Arr[]={1,2,4,6,7,9};

    int N=sizeof(Arr)/sizeof(int);

    int Key=8;

    cout<<"Element is "<<Binary_Search(Arr,0,N-1,Key)<<" founded "<<endl;

    return 0;
}