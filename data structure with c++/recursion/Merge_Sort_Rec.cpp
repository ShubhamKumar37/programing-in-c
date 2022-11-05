#include <iostream>

using namespace std;

void Merge_Array(int Arr[], int S, int E)
{
    int Mid = (S + E) >> 1;
    int Len_1 = Mid - S + 1;
    int Len_2 = E - Mid;

    int *F_Arr = new int[Len_1];
    int *S_Arr = new int[Len_2];

    int K = S;

    for (int i = 0; i < Len_1; i++)
    {
        F_Arr[i] = Arr[K++];
    }
    for (int i = 0; i < Len_2; i++)
    {
        S_Arr[i] = Arr[K++];
    }

    int F_Ind = 0;
    int S_Ind = 0;
    K = S;

    while (F_Ind < Len_1 && S_Ind < Len_2)
    {
        if (F_Arr[F_Ind] < S_Arr[S_Ind])
        {
            Arr[K++] = F_Arr[F_Ind++];
        }
        else
        {
            Arr[K++] = S_Arr[S_Ind++];
        }
    }

    while (F_Ind < Len_1)
    {
        Arr[K++] = F_Arr[F_Ind++];
    }
    while (S_Ind < Len_2)
    {
        Arr[K++] = S_Arr[S_Ind++];
    }

    delete[] F_Arr;
    delete[] S_Arr;
}

void Merge_Sort_Rec(int Arr[], int S, int E)
{
    if (S >= E)
    {
        return;
    }
    int Mid = (S + E) >> 1;

    Merge_Sort_Rec(Arr, S, Mid);
    Merge_Sort_Rec(Arr, Mid + 1, E);

    Merge_Array(Arr, S, E);
}

int main()
{
    int Arr[] = {2, 5, 4, 7, 6, 3};

    int N = sizeof(Arr) / sizeof(int);

    Merge_Sort_Rec(Arr, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}