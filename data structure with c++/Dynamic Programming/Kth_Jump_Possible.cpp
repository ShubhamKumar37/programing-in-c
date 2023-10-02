#include<iostream>
#include<VECTOR>
#define MOD 1000000007

int Add(int A, int B)
{
    return ((A % MOD) + (B % MOD)) % MOD;
}

using namespace std;

int Find_Min_Energy_Memo(vector<int> &Arr, vector<int> &DP, int &K, int N)
{
    if(N == 1)
    {
        return 0;
    }

    if(DP[N] != -1)
    {
        return DP[N];
    }
    vector<int> SO_Arr(K);
    int Min_Energy = INT_MAX;

    for(int i = 1; i <= K; i++)
    {
        if(N - i >= 0)
        {
            SO_Arr[i] = Add(Find_Min_Energy_Memo(Arr, DP, K, N - 1), abs(Arr[N] - Arr[N - i]));
            if(SO_Arr[i] < Min_Energy)
            {
                Min_Energy = SO_Arr[i];
            }
        }
    }

    return DP[N] = Min_Energy;
}
int Find_Min_Energy(vector<int> &Arr, vector<int> &DP, int &K, int N)
{
    if(N == 1)
    {
        return 0;
    }

    vector<int> SO_Arr(K);
    int Min_Energy = INT_MAX;

    for(int i = 1; i <= K; i++)
    {
        if(N - i >= 0)
        {
            SO_Arr[i] = Add(Find_Min_Energy(Arr, DP, K, N - 1), abs(Arr[N] - Arr[N - i]));
            if(SO_Arr[i] < Min_Energy)
            {
                Min_Energy = SO_Arr[i];
            }
        }
    }

    return Min_Energy;
}

int main()
{
    int N = 4;
    vector<int> Arr(N);
    vector<int> DP(N, -1);
    int K = 2;

    for(int i = 0; i < N; i++)
    {
        cout << "Enter the elements in vector ... " << endl;
        cin >> Arr[i];
    }

    // cout << "Minimum energy required for frog to jump is " << Find_Min_Energy(Arr, K, N);
    cout << "Minimum energy required for frog to jump is " << Find_Min_Energy_Memo(Arr, DP, K, N - 1);
    return 0;
}