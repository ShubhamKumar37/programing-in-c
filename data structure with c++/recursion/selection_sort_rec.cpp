#include <iostream>

using namespace std;

void Selection_Sort_Rec(int Arr[], int j, int N)
{
    if (N == j)
    {
        return;
    }
    int Min_Id = j;
    for (int i = j + 1; i < N; i++)
    {
        if (Arr[i] < Arr[Min_Id])
        {
            Min_Id = i;
        }
    }
    swap(Arr[Min_Id], Arr[j]);
    Selection_Sort_Rec(Arr, ++j, N);
}

int main()
{
    int Arr[] = {43, 56, 234, 67, 23, 3, 6, 5, 8, 3, 2, 6, 235};

    int N = sizeof(Arr) / sizeof(int);

    Selection_Sort_Rec(Arr, 0, N);

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}