#include <iostream>

using namespace std;

void zero_left(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j++], arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 0, 10, 0, 4, 3, 5, 6, 3, 6, 78, 9, 6, 4, 76, 5, 34, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(int);
    zero_left(arr, n);

    return 0;
}