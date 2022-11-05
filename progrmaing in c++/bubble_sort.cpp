#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                /* arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1]; */
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {2, 3, 2, 32};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}