#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7}, j = 0;
    int n = sizeof(arr) / sizeof(int);
    int *a = new int[n / 2];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            a[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << a[i] << endl;
    }
    delete a;
    return 0;
}