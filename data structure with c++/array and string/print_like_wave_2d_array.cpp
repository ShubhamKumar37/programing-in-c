#include<iostream>

using namespace std;

int main()
{
    int arr[3][3];
    cout << "Enter " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr1[9];
    int ind=0;
    for(int i=0;i<3;i++)
    {
        if(i&0)
        {
            for(int j=3-1;j<=0;j++)
            {
                arr1[ind++]=arr[j][i];
            }
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                arr1[ind++]=arr[j][i];
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        cout<<arr1[i]<<"  ";
    }
    return 0;
}