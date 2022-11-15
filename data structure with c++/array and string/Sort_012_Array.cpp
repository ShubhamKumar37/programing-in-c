#include <iostream>

using namespace std;

void Sort_012(int Arr[], int N)
{
    int i = 0, j = 0, k = N - 1;
    while (i <= k)
    {
        if (Arr[i] == 1)
        {
            i++;
        }
        else if (Arr[i] == 2)
        {
            swap(Arr[i], Arr[k--]);
        }
        else
        {
            swap(Arr[i++], Arr[j++]);
        }
    }
}

int main()
{
    int Arr[] = {2, 1, 2, 2, 1, 2, 2, 0, 0, 1, 0, 1, 1, 2, 0, 1};
    int N = sizeof(Arr) / sizeof(int);

    Sort_012(Arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}