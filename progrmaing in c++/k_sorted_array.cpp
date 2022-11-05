#include <iostream>

using namespace std;

void k_sorted(int arr[], int n, int k)
{
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << "  ";
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    k_sorted(arr, n, k);

    return 0;
}