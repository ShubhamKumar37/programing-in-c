#include <iostream>

using namespace std;

void Print(int Arr[], int S, int E)
{
    cout << endl;
    for (int i = S - 1; i < E; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int First_Occ(int Arr[], int S, int E, int Key, int N)
{
    if (S <= E)
    {
        // Print(Arr,S,E);
        int Mid = (S + E) >> 1;
        if (Arr[Mid] == Key && (Mid == 0 || Key > Arr[Mid - 1]))
        {
            return Mid;
        }
        else if (Arr[Mid] < Key)
        {
            return First_Occ(Arr, Mid + 1, E, Key, N);
        }
        else
        {
            return First_Occ(Arr, S, Mid - 1, Key, N);
        }
    }
    return -1;
}

int Last_Occ(int Arr[], int S, int E, int Key, int N)
{
    if (S <= E)
    {
        // Print(Arr,S,E);
        int Mid = (S + E) >> 1;
        if (Arr[Mid] == Key && (Mid == N - 1 || Key < Arr[Mid + 1]))
        {
            return Mid;
        }
        else if (Arr[Mid] > Key)
        {
            return Last_Occ(Arr, S, Mid - 1, Key, N);
        }
        else
        {
            return Last_Occ(Arr, Mid + 1, E, Key, N);
        }
    }
    return -1;
}

int main()
{
    int Arr[] = {1, 1, 1, 1, 8, 9, 9, 9, 9};
    int N = sizeof(Arr) / sizeof(N);

    int Key = 1;

    cout << "First occurance is " << First_Occ(Arr, 0, N - 1, Key, N) << endl;
    cout << "Last occurance is " << Last_Occ(Arr, 0, N - 1, Key, N) << endl;

    return 0;
}