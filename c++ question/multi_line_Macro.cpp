#include<iostream>

#define ELEMENT 1,\
                2,\
                3,\
                4

using namespace std;

int main()
{
    int arr[]={ELEMENT};
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}