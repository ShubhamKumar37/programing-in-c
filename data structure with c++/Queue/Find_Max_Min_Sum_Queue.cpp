#include<iostream>
#include<deque>

using namespace std;

int Solve(int *Arr ,int K ,int N)
{
    deque <int> Min(K);
    deque <int> Max(K);
    int Sum = 0;

    for(int i=0; i<K; i++)
    {
        while(!Min.empty() && Arr[Min.front()] >= Arr[i])
        {
            Min.pop_front();
        }
        while(!Max.empty() && Arr[Max.front()] <= Arr[i])
        {
            Max.pop_front();
        }
        Max.push_back(i);
        Min.push_back(i);
    }

    Sum = Arr[Max.front()] + Arr[Min.front()];

    for(int i=K; i<N; i++)
    {
        while(!Min.empty() && Arr[Min.front()] >= Arr[i])
        {
            Min.pop_front();
        }
        while(!Max.empty() && Arr[Max.front()] <= Arr[i])
        {
            Max.pop_front();
        }
        Max.push_back(i);
        Min.push_back(i);
        Sum += Arr[Max.front()] + Arr[Min.front()];
    }

    return Sum;
}

int main()
{
    int Arr[] = {2, 5, -1, 7, -3, -1, -2}  ;
    int K = 4;
    int N = sizeof(Arr) / sizeof(int);
    cout << "Ans of the question is " << Solve(Arr, K, N);

    return 0;
}