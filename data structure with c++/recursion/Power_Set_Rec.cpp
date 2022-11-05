#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void Power_Set(vector<int> a,vector <vector <int>>&Arr,int ind,vector <int> Output)
{
    if(ind>=a.size())
    {
        Arr.push_back(Output);
        return ;
    }

    //Exclusive
    Power_Set(a,Arr,ind+1,Output);

    //Inclusive
    int ele=a[ind];
    Output.push_back(ele);
    Power_Set(a,Arr,ind+1,Output);
}

int main()
{
    vector <int> a={1,2,3};
    vector <vector <int>> Arr;
    vector <int> Output;

    Power_Set(a,Arr,0,Output);

    for(int i=0;i<pow(2,3);i++)
    {
        cout<<Arr[0][i]<<" ";
    }

    return 0;
}