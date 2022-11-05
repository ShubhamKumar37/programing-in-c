#include <iostream>

using namespace std;

int Sum_Array(int Arr[], int N)
{
    if (N < 0)
    {
        return 0;
    }
    return (Sum_Array(Arr, N - 1) + Arr[N - 1]);
}

int main()
{
    int Arr[] = {1, 2, 3, 4, 5};

    int N = sizeof(Arr) / sizeof(int);

    cout << "Sum of the array is " << Sum_Array(Arr, N) << endl;

    return 0;
}