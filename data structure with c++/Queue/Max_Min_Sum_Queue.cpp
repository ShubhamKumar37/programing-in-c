#include<iostream>
#include<DEQUE>

using namespace std;

int Max_Min_Sum(int *Arr, int N, int K)
{
    int Sum = 0;
    deque<int> Maxi;
    deque<int> Mini;

    for(int i=0; i<K; i++)
    {
        while(!Maxi.empty() && Arr[Maxi.back()] <= Arr[i])
        {
            Maxi.pop_back();
        }
        while(!Mini.empty() && Arr[Mini.back()] >= Arr[i])
        {
            Mini.pop_back();
        }

        Maxi.push_back(i);
        Mini.push_back(i);
    }

    Sum += Arr[Maxi.front()] - Arr[Mini.front()];
    // cout << Arr[Maxi.front()] << " " << Arr[Mini.front()] << endl;

    for(int i=K; i<N; i++)
    {

        while(!Maxi.empty() && i - Maxi.front() >= K)
        {
            Maxi.pop_front();
        }
        while(!Mini.empty() && i - Mini.front() >= K)
        {
            Mini.pop_front();
        }

        while(!Maxi.empty() && Arr[Maxi.back()] <= Arr[i])
        {
            Maxi.pop_back();
        }
        while(!Mini.empty() && Arr[Mini.back()] >= Arr[i])
        {
            Mini.pop_back();
        }

        Maxi.push_back(i);
        Mini.push_back(i);

        Sum += Arr[Maxi.front()] - Arr[Mini.front()];
        // cout << Arr[Maxi.front()] << " " << Arr[Mini.front()] << endl;
    }

    return Sum;
}

int main()
{
    int Arr[] = {2, 4, 7, 3, 8, 1};
    int N = sizeof(Arr)/sizeof(int);
    int K = 4;

    cout << "Sum of maximum and minimum element of window size " << K << " is " << Max_Min_Sum(Arr, N, K) << endl;

    return 0;
}