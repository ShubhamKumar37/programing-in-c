#include <iostream>
#include <deque>

using namespace std;

int Solve(int *Arr, int K, int N)
{
    deque<int> Min(K);
    deque<int> Max(K);
    int Sum = 0;

    for (int i = 0; i < K; i++)
    {
        while (!Min.empty() && Arr[Min.back()] >= Arr[i])
        {
            Min.pop_back();
        }
        while (!Max.empty() && Arr[Max.back()] <= Arr[i])
        {
            Max.pop_back();
        }
        Max.push_back(i);
        Min.push_back(i);
    }

    Sum = Arr[Max.front()] + Arr[Min.front()];

    for (int i = K; i < N; i++)
    {
        if(!Min.empty() && i - Min.front() >= K)
        {
            Min.pop_front();
        }
        if(!Max.empty() && i - Max.front() >= K)
        {
            Max.pop_front();
        }
        while (!Min.empty() && Arr[Min.back()] >= Arr[i])
        {
            Min.pop_back();
        }
        while (!Max.empty() && Arr[Max.back()] <= Arr[i])
        {
            Max.pop_back();
        }
        Max.push_back(i);
        Min.push_back(i);
        Sum += Arr[Max.front()] + Arr[Min.front()];
    }

    return Sum;
}

int Alt_Solve(int *Arr, int K, int N)
{
    int P_Min = INT_MAX;
    int P_Max = INT_MIN;
    int Min = Arr[0];
    int Max = Arr[0];
    int Ans = 0;

    int i = 0 , j = 1;
    while(j < N)
    {
        if(j < K)
        {
            P_Min = max(Min , Arr[j]) == Min ? Min : P_Min ;
            P_Max = min(Max , Arr[j]) == Max ? Max : P_Max ;
            Min = min(Arr[j] , Min);
            Max = max(Arr[j] , Max);
            j++;
        }
        else if(j - i + 1 == K)
        {
            Ans = Min + Max;
            P_Min = max(Min , Arr[j]) == Min ? Min : P_Min ;
            P_Max = min(Max , Arr[j]) == Max ? Max : P_Max ;
            Min = min(Arr[j] , Min);
            Max = max(Arr[j] , Max);
        }
    }
}

int main()
{
    // int Arr[] = {2, 5, -1, 7, -3, -1, -2};
    int Arr[] = {1,2,3,4,5,6};
    int K = 3;
    int N = sizeof(Arr) / sizeof(int);
    cout << "Ans of the question is " << Solve(Arr, K, N);

    return 0;
}