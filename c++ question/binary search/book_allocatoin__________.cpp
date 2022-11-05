#include <iostream>

using namespace std;

bool possible(int arr[], int n, int k, int mid)
{
    int std = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            std++;
            if (std > k || arr[i] > mid)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int finding(int arr[], int n, int k)
{
    int s, e, mid, ans;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }
    s = 0;
    mid = (s + e) >> 1;
    ans = -1;
    while (s < e)
    {
        if (possible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) >> 1;
    }
    return ans;
}

int main()
{
    int arr[] = {5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;
    cout << "Number of page can be possible are " << finding(arr, n, k) << endl;
    return 0;
}