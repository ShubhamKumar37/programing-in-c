#include <iostream>

using namespace std;

int largest_sum_subarray(int arr[], int n)
{
    int i, maxd = INT_MIN;
    bool temp = true;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            temp = false;
        if (arr[i] > maxd && temp == true)
            maxd = arr[i];
    }
    if (temp == true)
    {
        return maxd;
    }
    int mad = INT_MIN;
    int f = 0;
    int t = 0;
    for (i = 0; i < n; i++)
    {
        t = mad + arr[i];
        if (t < arr[i])
        {
            mad = arr[i];
        }
        else
        {
            mad = t;
        }
        f = max(mad, f);
    }
    return f;
}

int main()
{
    int arr[] = {1, 2, 3, -2,45,-23};
    int n = sizeof(arr) / sizeof(int);
    cout << largest_sum_subarray(arr, n);
    return 0;
}