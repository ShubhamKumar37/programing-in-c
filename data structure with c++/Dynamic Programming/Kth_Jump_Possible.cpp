#include<iostream>
#include<VECTOR>

using namespace std;

int Find_Min_Energy(vector<int> &Arr, int &K, int N)
{
    if(N == 1)
    {
        return 0;
    }

    vector<int> SO_Arr(N);
    int Min_Energy = 0;

    for(int i = 0; i < N; i++)
    {
        Min_Energy = min(Min_Energy, abs(Arr[0] - Arr[i]));
        SO_Arr.push_back(abs(Arr[0] - Arr[i]));
    }

    int A = Find_Min_Energy_K(Arr, K - 1);

    for(int i = K; i < N; i++)
    {
        vector<int> Temp = SO_Arr;
        int Temp_Energy = INT_MAX;
        for(int j = 0; j < K; j++)
        {

        }
    }
}

int main()
{
    vector<int> Arr(10);
    int K = 4;

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter the elements in vector ... " << endl;
        cin >> Arr[i];
    }

    cout << "Minimum energy required for frog to jump is " << Find_Min_Energy(Arr, K, 10);
    return 0;
}