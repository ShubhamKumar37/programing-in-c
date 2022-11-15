#include <iostream>

using namespace std;

void Sort_01(int Arr[], int N)
{
    int i = 0, j = N - 1;
    while (i != j)
    {
        if (Arr[i] == 0)
        {
            i++;
        }
        else
        {
            swap(Arr[i], Arr[j--]);
        }
    }
}

int main()
{
    int Arr[] = {1, 0};
    int N = sizeof(Arr) / sizeof(int);

    Sort_01(Arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}