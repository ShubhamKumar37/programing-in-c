#include<iostream>
#include<vector>

using namespace std;

bool Find_Dist(vector<vector<int >> arr,int b,int mid,int row,int col)
{
    int totalsum=0;
    for(int i=0;i<row;i++)
    {
        int arrsum=0;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]+arrsum < mid && totalsum<b)
            {
                arrsum+=arr[i][j];
                totalsum+=arr[i][j];
            }
            if(totalsum>b)
            {
                return false;
            }
            else
            {
                continue;
            }
        }
    }
    return true;
}

int main()
{
    vector <vector<int>> a;

    int Row=3;
    int Col=4;

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Col;j++)
        {
            cout<<"Enter t"<<endl;
            cin>>a[i][j];
        }
    }

    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Possible number are "<<Find_Dist(a,20,9,Row,Col)<<endl;

    return 0;
}