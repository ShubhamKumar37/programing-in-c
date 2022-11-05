#include<iostream>

using namespace std;

void Bubble_Sort_Rec(int Arr[],int N)
{
    if(N==0)
    {
        return ;
    }
    for(int i=0;i<N-1;i++)
    {
        if(Arr[i]>Arr[i+1])
        {
            swap(Arr[i],Arr[i+1]);
        }
    }
    Bubble_Sort_Rec(Arr,N-1);
}

int main()
{
    int Arr[]={3,34,6,54,54,54,234,98,234,5,7,3,8,9,3};

    int N=sizeof(Arr)/sizeof(int);

    Bubble_Sort_Rec(Arr,N);

    for(int i=0;i<N;i++)
    {
        cout<<Arr[i]<<" ";
    }

    return 0;
}