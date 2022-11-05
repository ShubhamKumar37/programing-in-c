#include <iostream>

using namespace std;

bool Is_Sorted(int Arr[], int N)
{
    if (N < 2)
    {
        return true;
    }
    else
    {
        if (Arr[0] > Arr[1])
        {
            return false;
        }
        else
        {
            return Is_Sorted(Arr + 1, N - 1);
        }
    }
}

int main()
{
    int Arr[] = {4, 23, 5, 6};

    int N = sizeof(Arr) / sizeof(int);

    cout << "Array is sorted or not = " << Is_Sorted(Arr, N) << endl;

    return 0;
}